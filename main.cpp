#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "backend.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Instantiate Backend
    Backend backend;

    QQmlApplicationEngine engine;

    // Expose the Backend instance to QML
    engine.rootContext()->setContextProperty("backend", &backend);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
