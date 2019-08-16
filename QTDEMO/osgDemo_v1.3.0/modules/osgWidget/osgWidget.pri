INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

QT += opengl

FORMS += \
    $$PWD/OsgWidget.ui

HEADERS += \
    $$PWD/define.h \
    $$PWD/OsgWidget.h


SOURCES += \
    $$PWD/define.cpp \
    $$PWD/OsgWidget.cpp

HEADERS += \
    $$PWD/osg3.4.0/include/osgQt/Export.h \
    $$PWD/osg3.4.0/include/osgQt/GraphicsWindowQt.h \
    $$PWD/osg3.4.0/include/osgQt/QFontImplementation.h \
    $$PWD/osg3.4.0/include/osgQt/QWidgetImage.h \
    $$PWD/osg3.4.0/include/osgQt/Version.h \
    $$PWD/osg3.4.0/include/osgQt/QGraphicsViewAdapter.h

SOURCES += \
    $$PWD/osg3.4.0/include/osgQt/GraphicsWindowQt.cpp \
    $$PWD/osg3.4.0/include/osgQt/QFontImplementation.cpp \
    $$PWD/osg3.4.0/include/osgQt/QGraphicsViewAdapter.cpp \
    $$PWD/osg3.4.0/include/osgQt/QWidgetImage.cpp

INCLUDEPATH += $$PWD/osg3.4.0/include
DEPENDPATH += $$PWD/osg3.4.0/include

LIBS += -L$$PWD/osg3.4.0/lib

#LIBS += -lOpenThreads \
#        -losg \
#        -losgAnimation \
#        -losgDB \
#        -losgFX \
#        -losgGA \
#        -losgManipulator \
#        -losgParticle \
#        -losgPresentation \
#        -losgShadow \
#        -losgText \
#        -losgUI \
#        -losgUtil \
#        -losgViewer \
#        -losgVolume \
#        -losgWidget

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
#        -losgQt \
        -losgSim \
        -losgTerrain


win32{
    # copy ffmpeg
    src_file = $$PWD/osg3.4.0/bin/*
    dst_file = $$OUT_PWD
    target_file = $$DESTDIR
    data_file = $$PWD/osg3.4.0/data/*

    src_file ~= s,/,\\,g
    dst_file ~= s,/,\\,g
    target_file ~= s,/,\\,g
    data_file ~= s,/,\\,g

    system(xcopy $$src_file $$dst_file /y /s/q/e)
    system(xcopy $$data_file $$dst_file /y /s/q/e)
#    system(xcopy $$src_file $$target_file /y /s/q/e)
}
