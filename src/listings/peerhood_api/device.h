PH_COMMONSHARED_EXPORT QDataStream& operator<<(QDataStream&, Device&); 
PH_COMMONSHARED_EXPORT QDataStream& operator<<(QDataStream&, Device*); 
PH_COMMONSHARED_EXPORT QDebug operator<<(QDebug, Device&); 
PH_COMMONSHARED_EXPORT QDebug operator<<(QDebug, Device*); 
PH_COMMONSHARED_EXPORT QDataStream& operator>>(QDataStream&, Device*); 

class PH_COMMONSHARED_EXPORT Device : public QObject 
{ 
    Q_OBJECT 
    Q_PROPERTY(QString name READ name) 
    Q_PROPERTY(int checksum READ checksum) 
    Q_PROPERTY(QString prototype READ prototype) 
    Q_PROPERTY(QString address READ address) 
    Q_PROPERTY(bool hasPeerHood READ hasPeerHood) 

protected: 
    explicit Device(QObject *parent = 0); 

public: 
    explicit Device(QDataStream& stream, QObject *parent = 0); 
    virtual ~Device(); 
    virtual const QString& name(); 
    virtual unsigned int checksum(); 
    virtual const QString& prototype(); 
    virtual const QString& address(); 
    virtual bool hasPeerHood(); 
    virtual const QList<Service*>& serviceList(); 

    Q_INVOKABLE virtual bool hasService(const QString& service); 

protected: 
    virtual void lockServiceList(); 
    virtual void unLockServiceList(); 

protected:
    QString         m_name; 
    unsigned int    m_checksum; 
    QString         m_prototype; 
    QString         m_address; 
    bool            m_hasPeerHood; 
    QList<Service*> m_services; 

private: 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator<<(QDataStream&, Device&); 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator<<(QDataStream&, Device*); 
    PH_COMMONSHARED_EXPORT friend QDebug operator<<(QDebug, Device&); 
    PH_COMMONSHARED_EXPORT friend QDebug operator<<(QDebug, Device*); 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator>>(QDataStream&, Device*); 
};
