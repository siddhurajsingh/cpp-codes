#include <iostream>
using namespace std;

class Connection {
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
    virtual void sendData(string data) = 0;
    virtual ~Connection() {}
};

class WiFiConnection : public Connection {
public:
    void connect() override { cout << "Connected to WiFi" << endl; }
    void disconnect() override { cout << "Disconnected from WiFi" << endl; }
    void sendData(string data) override { cout << "Sending via WiFi: " << data << endl; }
};

class BluetoothConnection : public Connection {
public:
    void connect() override { cout << "Connected to Bluetooth" << endl; }
    void disconnect() override { cout << "Disconnected from Bluetooth" << endl; }
    void sendData(string data) override { cout << "Sending via Bluetooth: " << data << endl; }
};

int main() {
    WiFiConnection wc;
    wc.connect();
    wc.sendData("Hello");
    wc.disconnect();
    return 0;
}
