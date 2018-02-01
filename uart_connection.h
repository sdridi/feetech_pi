#ifndef UART_CONNECTION_H
#define UART_CONNECTION_H

#include <stdint.h>
#include <stdio.h>
#include <unistd.h>			//Used for UART
#include <fcntl.h>			//Used for UART
#include <termios.h>		//Used for UART


class UARTConnection {
    


    private:
    public:
    UARTConnection();

    void connect();

    void send(uint8_t byteArray[], int size);


};

#endif