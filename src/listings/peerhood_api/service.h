PH_COMMONSHARED_EXPORT QDataStream& operator<<(QDataStream&, Service&); 
PH_COMMONSHARED_EXPORT QDataStream& operator<<(QDataStream&, Service*); 
PH_COMMONSHARED_EXPORT QDataStream& operator>>(QDataStream&, Service&); 
PH_COMMONSHARED_EXPORT QDataStream& operator>>(QDataStream&, Service*); 
PH_COMMONSHARED_EXPORT QDebug operator<<(QDebug, Service&); 
PH_COMMONSHARED_EXPORT QDebug operator<<(QDebug, Service*); 

class PH_COMMONSHARED_EXPORT Service : public QObject 
{ 
    Q_OBJECT 
protected: 
    static const QChar m_separator; 

public: 
    explicit Service(QObject *parent = 0);  
    explicit Service(const Service* original); 
    explicit Service(const QString& name, const QStringList& attributes, 
      unsigned int port, quint64 pid = 0, QObject* parent=0); 
    virtual ~Service(); 

public: 
    virtual const QString& name(); 
    virtual unsigned int port(); 
    virtual bool isAttribute(const QString& attribute); 
    virtual const QStringList& attributes(); 
    virtual quint64 pid(); 
    virtual void setPort(unsigned int); 

protected:
    QString m_name; 
    quint16 m_port; 
    QStringList m_attributes; 
    quint64 m_pid; 

private: 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator<<(QDataStream&, Service&); 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator<<(QDataStream&, Service*); 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator>>(QDataStream&, Service&); 
    PH_COMMONSHARED_EXPORT friend QDataStream& operator>>(QDataStream&, Service*); 
    PH_COMMONSHARED_EXPORT friend QDebug operator<<(QDebug, Service&); 
    PH_COMMONSHARED_EXPORT friend QDebug operator<<(QDebug, Service*); 

};
