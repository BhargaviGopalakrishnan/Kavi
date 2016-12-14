QT += core sql
QT -= gui
QT += sql
QT += widgets

CONFIG += c++11

TARGET = testmysql
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
