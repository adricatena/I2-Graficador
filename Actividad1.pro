#-------------------------------------------------
#
# Project created by QtCreator 2012-11-30T09:45:32
#
#-------------------------------------------------

QT       += core gui

TARGET = Actividad1
TEMPLATE = app


SOURCES += main.cpp\
        ventanaprincipal.cpp \
    ventananuevoarchivo.cpp

HEADERS  += ventanaprincipal.h \
    ventananuevoarchivo.h

FORMS    += ventanaprincipal.ui \
    ventananuevoarchivo.ui

# Modificaciones introducidas para utilizar qwt
INCLUDEPATH += C:/Qwt-6.0.1/include
DEPENDPATH += C:/Qwt-6.0.1/lib
LIBS += -LC:/Qwt-6.0.1/lib
win32 {
CONFIG(debug, debug|release) {
LIBS += -lqwtd
LIBS += -lqwtmathmld
} else {
LIBS += -lqwt
LIBS += -lqwtmathml
}
}

RESOURCES += \
    imagenes.qrc
