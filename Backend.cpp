#include "backend.h"
#include <QDebug>
#include <QFileDialog>

Backend::Backend(QObject *parent) : QObject(parent) {}

void Backend::selectAndOpenExe() // Renamed function
{
    QString exePath = QFileDialog::getOpenFileName(nullptr, "Select Executable", "", "Executable Files (*.exe)");

    if (exePath.isEmpty()) {
        qDebug() << "No executable selected";
        return;
    }

    QProcess *process = new QProcess(this);
    process->start(exePath);

    if (!process->waitForStarted()) {
        qDebug() << "Failed to start the executable:" << process->errorString();
    } else {
        qDebug() << "Executable started successfully";
    }
}
