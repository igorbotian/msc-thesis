class PH_COMMONSHARED_EXPORT AbstractCreator : public QObject
{
    Q_OBJECT
public:
    virtual AbstractConnection* createConnection() = 0;
    virtual AbstractAdverter* createAdverter() = 0;
    virtual AbstractPinger* createPinger(const QString& address) = 0;
    virtual AbstractMonitor* createMonitor(const QString& address) = 0;
    virtual const QString& connectionBase() = 0;
};
