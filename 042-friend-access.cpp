#include <iostream>
using namespace std;

class Database {
public:
    virtual void connect() = 0;
    virtual void executeQuery(string query) = 0;
    virtual void disconnect() = 0;
    virtual ~Database() {}
};

class MySQL : public Database {
public:
    void connect() override { cout << "Connecting to MySQL..." << endl; }
    void executeQuery(string query) override { cout << "Executing on MySQL: " << query << endl; }
    void disconnect() override { cout << "Disconnecting from MySQL..." << endl; }
};

class MongoDB : public Database {
public:
    void connect() override { cout << "Connecting to MongoDB..." << endl; }
    void executeQuery(string query) override { cout << "Executing on MongoDB: " << query << endl; }
    void disconnect() override { cout << "Disconnecting from MongoDB..." << endl; }
};

int main() {
    MySQL db;
    db.connect();
    db.executeQuery("SELECT * FROM users");
    db.disconnect();
    return 0;
}
