QT += core
QT -= gui

CONFIG += c++11
QT += opengl

TARGET = helloworld_osg
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

DEFINES += QT_DEPRECATED_WARNINGS

INCLUDEPATH += $$PWD/osg3.4.0/include
DEPENDPATH += $$PWD/osg3.4.0/include

LIBS += -L$$PWD/osg3.4.0/lib
LIBS += -lOpenThreads \
        -losg \
        -losgAnimation \
        -losgDB \
        -losgFX \
        -losgGA \
        -losgManipulator \
        -losgParticle \
        -losgPresentation \
        -losgShadow \
        -losgText \
        -losgUI \
        -losgUtil \
        -losgViewer \
        -losgVolume \
        -losgWidget \
       -losgQt \
        -losgSim \
        -losgTerrain

#win32{
#    # copy ffmpeg
##    src_file = $$PWD/osg3.4.0/bin/*
##    dst_file = $$OUT_PWD
##    target_file = $$DESTDIR
##    data_file = $$PWD/osg3.4.0/data/*

##    src_file ~= s,/,\\,g
##    dst_file ~= s,/,\\,g
##    target_file ~= s,/,\\,g
##    data_file ~= s,/,\\,g

##    system(xcopy $$src_file $$dst_file /y /s/q/e)
##    system(xcopy $$data_file $$dst_file /y /s/q/e)
##   system(xcopy $$src_file $$target_file /y /s/q/e)
#}

