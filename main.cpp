
#include "uart_connection.h"
#include <iostream>
#include <string>

int main(int argc, char **argv) {
    UARTConnection uartConnection = new UARTConnection();
    uartConnection.connect();

    while(true) {
        std::string data;
        cout << "Please enter a message: " << endl;
        cin >> data;

        UARTConnection.write(data.c_str(), data.length());
    }
    return 0;
}