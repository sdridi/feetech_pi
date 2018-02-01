CC=gcc
CXX=g++
RM=rm -f

all: tool

a: $(OBJS)
    $(CXX) $(LDFLAGS) -o tool $(OBJS) $(LDLIBS) 

main.o: main.cpp

servo.o: servo.cpp servo.h

servo_manager.o: servo_manager.cpp servo_manager.h

uart_connection.o: uart_connection.cpp uart_connection.h
