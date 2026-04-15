#include <iostream>
using namespace std;

class Analytics {
public:
    virtual void trackEvent(string event) = 0;
    virtual void generateReport() = 0;
    virtual ~Analytics() {}
};

class GAAnalytics : public Analytics {
public:
    void trackEvent(string event) override { cout << "Tracking event on GA: " << event << endl; }
    void generateReport() override { cout << "Generating GA report..." << endl; }
};

int main() {
    GAAnalytics ga;
    ga.trackEvent("user_login");
    ga.generateReport();
    return 0;
}
