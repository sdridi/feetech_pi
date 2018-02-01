CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g $(shell root-config --cflags)
LDFLAGS=-g $(shell root-config --ldflags)
LDLIBS=$(shell root-config --libs)
SRCS=main.cpp servo.cpp servo_manager.cpp uart_connection.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o main $(OBJS) $(LDLIBS) 

main.o: main.cpp

servo.o: servo.cpp servo.h

servo_manager.o: servo_manager.cpp servo_manager.h

uart_connection.o: uart_connection.cpp uart_connection.h
