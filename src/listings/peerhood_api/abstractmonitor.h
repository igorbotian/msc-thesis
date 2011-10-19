class PH_COMMONSHARED_EXPORT AbstractMonitor : public QObject
{
    Q_OBJECT
public:
    explicit AbstractMonitor(const QString& address, const QString& connectionBase);
    virtual ~AbstractMonitor();

public:
    virtual bool isInRange();
    virtual int signalStrength() = 0;
    virtual bool startMonitoring() = 0;
    virtual const QString& connectionBase();
    virtual const QString& address();

public slots:
    virtual void stopMonitoring() = 0;

signals:
    void signalStrengthChanged(const QString& address, const QString& base, int strength);

protected:
    bool m_isInRange;
    QString m_address;
    QString m_connectionBase;
};
