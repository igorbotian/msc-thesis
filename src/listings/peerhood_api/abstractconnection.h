class PH_COMMONSHARED_EXPORT AbstractConnection : public QObject
{
    Q_OBJECT
public:
  virtual ~AbstractConnection(){}
  virtual bool init() = 0;
  virtual const QString& name() = 0;
  virtual const QString& connectionBase() = 0;
  virtual EConnectionState state() = 0;

signals:
  void stateChanged(EConnectionState state, const QString& connectionBase);

public slots:
  virtual void changeState(EConnectionState state) = 0;
};
