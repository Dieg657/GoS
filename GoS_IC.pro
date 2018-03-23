TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    localidade.cpp \
    via.cpp \
    utilidades.cpp \
    interface.cpp \
    veiculo.cpp

HEADERS += \
    localidade.h \
    via.h \
    cabecalho.hpp \
    utilidades.h \
    interface.h \
    veiculo.h
