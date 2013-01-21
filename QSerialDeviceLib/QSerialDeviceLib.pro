TEMPLATE = lib

HEADERS += \
    qserialdevice.h \
    qserialsettingswidget.h \
    hled.h

SOURCES += \
    qserialdevice.cpp \
    qserialsettingswidget.cpp \
    hled.cpp

FORMS += \
    qserialsettingswidget.ui

unix|win32: LIBS += -lqextserialport

OTHER_FILES +=

CONFIG += debug_and_release

CONFIG(debug, debug|release) {
    DEFINES += _DEBUG_QSERIALDEVICE_LIB \
                _DEBUG_QSERIALDEVICE_WIDGET
    unix: TARGET = $$join(TARGET,,,_debug)
    win32: TARGET = $$join(TARGET,,d)
}
