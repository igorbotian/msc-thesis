enum EDeviceStatus 
{ 
    DeviceLost = 0x00, 
    DeviceFound, 
    WeakLink, 
    VeryWeakLink 
};

class PHLIBRARYSHARED_EXPORT PeerHood : public QObject 
{ 
    Q_OBJECT 
public: 
    static PeerHood* instance(); 
    virtual ~PeerHood(); 
    virtual bool init(); 
    virtual const QList<Device*> deviceList(); 
    virtual const QList<Device*> deviceList(const QString& service); 
    virtual const QList<Service*> localServiceList();  
    virtual int registerService(const QString& name, 
      const QStringList& attributes = QStringList(), 
      unsigned int port = 0); 
    virtual bool unregisterService(const QString& name, unsigned int port = 0);  
    virtual AbstractConnection* connectToService(Device* device, const QString& servicename); 
    virtual AbstractConnection* connectToService(Service* service);  
    virtual bool hasPendingConnections(int servicePort);  
    virtual AbstractConnection* nextPendingConnection(int servicePort); 
    virtual bool monitorDevice(Device* device); 
    virtual void unMonitorDevice(Device* device); 
    virtual bool signalMonitorDevice(Device* device); 
    virtual void signalUnMonitorDevice(Device* device); 

signals: 
    void newConnection(int servicePort, int connectionId); 
    void deviceStatusChanged(PH::EDeviceStatus status, QString address); 

protected: 
    explicit PeerHood(QObject *parent = 0); 
    void connectNotify(const char* signal); 
    void disconnectNotify(const char* signal); 

protected:
    PeerHoodPrivate* d; 

private:
    Q_DISABLE_COPY(PeerHood) 
};
