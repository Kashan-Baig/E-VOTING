QT += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    After_voter_login.cpp \
    add_candidate.cpp \
    admin.cpp \
    candidate_screen.cpp \
    candidates_dashboard.cpp \
    database.cpp \
    main.cpp \
    mainpage.cpp \
    vote_casting.cpp \
    voter_login.cpp \
    voter_signin.cpp

HEADERS += \
    After_voter_login.h \
    add_candidate.h \
    admin.h \
    candidate_screen.h \
    candidates_dashboard.h \
    database.h \
    mainpage.h \
    vote_casting.h \
    voter_login.h \
    voter_signin.h

FORMS += \
    After_voter_login.ui \
    Sign_win.ui \
    add_candidate.ui \
    admin.ui \
    candidate_screen.ui \
    candidates_dashboard.ui \
    mainpage.ui \
    vote_casting.ui \
    voter_login.ui \
    voter_signin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
