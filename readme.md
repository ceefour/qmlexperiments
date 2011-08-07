Qt Quick & QML Experiments
==========================

* Copyright (C) 2011 Hendy Irawan. All Rights Reserved.
* Licensed under Qt Public License.

Quick Start
-----------
1. Install Microsoft Visual Studio C++ 2008 (Express)
2. Download Qt Library 4.7.x for Visual C++ 2008
3. Set environment QTDIR to C:\Qt\4.7.x

How to Create A New Qt Project in Visual Studio 2008
----------------------------------------------------
1. Create a new Makefile project
2. For Debug, set the build command as: qmake && nmake
   Set the Debug launch command as: debug\YourApp.exe
3. For Release, set the build command as: qmake && nmake release-all
   Set the Release launch command as: release\YourApp.exe
4. Add a YourApp.cpp file
5. Create initial Qt .pro project file by running: qmake -project

You should get this:

    TEMPLATE = app
    TARGET = 
    DEPENDPATH += .
    INCLUDEPATH += .

    # Input
    SOURCES += YourApp.cpp

To support QML / Qt Quick, add to .pro file:

    QT += gui declarative

What about Visual Studio 2010?
------------------------------
It's possible but you'll have to download Qt sources and
build using Visual Studio compiler which can take 3 hours or more.
