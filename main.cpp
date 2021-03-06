#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "weatherapi.h"

int main(int argc, char *argv[])
{
    qmlRegisterType<WeatherAPI>("org.thepaffy.weatherapi", 1, 0, "WeatherAPI");
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    return app.exec();
}
