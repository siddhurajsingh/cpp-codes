#include <iostream>
using namespace std;

class Hospital {
private:
    vector<string> patients;
    vector<string> doctors;
public:
    void admitPatient(string name) { patients.push_back(name); }
    void registerDoctor(string name) { doctors.push_back(name); }
    
    void listPatients() {
        cout << "Patients: ";
        for (const auto& p : patients) cout << p << " ";
        cout << endl;
    }
    
    void listDoctors() {
        cout << "Doctors: ";
        for (const auto& d : doctors) cout << d << " ";
        cout << endl;
    }
};

int main() {
    Hospital h;
    h.admitPatient("John");
    h.registerDoctor("Dr. Smith");
    h.listPatients();
    h.listDoctors();
    return 0;
}
