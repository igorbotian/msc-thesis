class PHLIBRARYSHARED_EXPORT PeerHoodSettings : public QObject 
{ 
    Q_OBJECT 
    Q_PROPERTY(QString deviceName READ deviceName) 
    Q_PROPERTY(int deviceChecksum READ deviceChecksum) 
    Q_PROPERTY(QString peerhoodVersion READ peerhoodVersion) 

public: 
    explicit PeerHoodSettings(QObject *parent = 0); 
    virtual ~PeerHoodSettings(); 
    const QString deviceName(); 
    int deviceChecksum();  
    const QString peerhoodVersion(); 

private: 
    PeerHoodSettingsPrivate* d; 
};
