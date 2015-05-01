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

INCLUDEPATH += D:\opencv\build\include\


CONFIG(release,debug|release){
    LIBS += D:\opencv\build\x86\vc10\lib\opencv_calib3d246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_contrib246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_core246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_features2d246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_flann246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_gpu246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_highgui246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_imgproc246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_legacy246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_ml246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_objdetect246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_ts246.lib \
            D:\opencv\build\x86\vc10\lib\opencv_video246.lib \
}

