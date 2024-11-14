#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QProcess>

class Backend : public QObject
{
    Q_OBJECT
public:
    explicit Backend(QObject *parent = nullptr);

    Q_INVOKABLE void selectAndOpenExe(); // Renamed function
};

#endif // BACKEND_H
