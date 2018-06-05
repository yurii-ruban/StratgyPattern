TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    animal.cpp \
    worm.cpp \
    dog.cpp \
    cat.cpp \
    lynx.cpp \
    isaybehavior.cpp \
    saystrategy1.cpp \
    saystrategy2.cpp \
    nosay.cpp

HEADERS += \
    animal.h \
    worm.h \
    dog.h \
    cat.h \
    lynx.h \
    isaybehavior.h \
    saystrategy1.h \
    saystrategy2.h \
    nosay.h
