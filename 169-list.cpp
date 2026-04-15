#include <iostream>
using namespace std;

class API {
public:
    virtual string get(string endpoint) = 0;
    virtual void post(string endpoint, string data) = 0;
    virtual ~API() {}
};

class RESTfulAPI : public API {
public:
    string get(string endpoint) override { return "GET response from " + endpoint; }
    void post(string endpoint, string data) override { cout << "POST to " << endpoint << ": " << data << endl; }
};

int main() {
    RESTfulAPI api;
    cout << api.get("/users") << endl;
    api.post("/users", "{\"name\":\"Bob\"}");
    return 0;
}
