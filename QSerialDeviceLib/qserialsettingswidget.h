#ifndef QSERIALSETTINGSWIDGET_H
#define QSERIALSETTINGSWIDGET_H

#include <QWidget>

#include <QtExtSerialPort/qextserialport.h>
#include <QtExtSerialPort/qextserialenumerator.h>

namespace Ui {
class QSerialSettingsWidget;
}

class QSerialSettingsWidget : public QWidget
{
    Q_OBJECT

private:
    QextSerialEnumerator *_serialEnumerator;
#ifdef _DEBUG_QSERIALDEVICE_WIDGET
    bool _isFirstTime;
#endif //_DEBUG_QSERIALDEVICE_WIDGET

private slots:
    void updateDevicesList();

public:
    explicit QSerialSettingsWidget(QWidget *parent = 0);
    ~QSerialSettingsWidget();

    PortSettings getPortSettings();
    QString getPortName();

    QWidget *getPortWidget();

private:
    Ui::QSerialSettingsWidget *ui;
};

#endif // QSERIALSETTINGSWIDGET_H
