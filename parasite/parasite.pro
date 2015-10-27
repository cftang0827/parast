#-------------------------------------------------
#
# Project created by QtCreator 2014-02-06T23:45:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h

FORMS    += mainwindow.ui

#LIBS += "QtTest5.lib"
QT += widgets






####-------------------------------------------------
####
#### OpenCV lib include
####
####-------------------------------------------------

####-------------------------------------------------
####
#### OpenCV lib include
####
####-------------------------------------------------

INCLUDEPATH += I:\opencv\build\include\


CONFIG(release,debug|release){
    LIBS += I:\opencv\build\x64\vc12\lib\opencv_calib3d249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_contrib249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_core249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_features2d249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_flann249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_gpu249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_highgui249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_imgproc249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_legacy249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_ml249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_objdetect249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_ts249.lib \
            I:\opencv\build\x64\vc12\lib\opencv_video249.lib \
}
