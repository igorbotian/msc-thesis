class PH_COMMONSHARED_EXPORT AbstractAdverter : public QObject
{
    Q_OBJECT
public:
    virtual ~AbstractAdverter(){};
    virtual bool start() = 0;
    virtual void stop() = 0;
    virtual bool isActive() = 0;
    virtual const QString& connectionBase() = 0;
};
