
#include "uart_connection.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
    UARTConnection uartConnection = new UARTConnection();
    uartConnection.connect();

    while(true) {
        string data;
        cout << "Please enter a message: " << endl;
        cin >> data;

        uartConnection.send(data.c_str(), data.length());
    }
    return 0;
}