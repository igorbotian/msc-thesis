class PH_COMMONSHARED_EXPORT AbstractPinger : public QObject
{
    Q_OBJECT
public:
    explicit AbstractPinger(const QString& address, const QString& connectionBase);
    virtual ~AbstractPinger();
    virtual const QString& connectionBase();
    virtual const QString& address();
    virtual bool isInRange();
    virtual bool ping() = 0;

protected:
    QString m_connectionBase;
    QString m_address;
    bool m_isInRange;
};
