#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
    int age;

public:
    void getPersonInfo() {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPersonInfo() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived Class
class Patient : public Person {
private:
    int patientID;
    string disease;

public:
    void getPatientInfo() {
        getPersonInfo(); // Call base class method
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cout << "Enter Disease: ";
        getline(cin >> ws, disease);
    }

    void displayFullDetails() {
        cout << "\n--- Patient Record ---" << endl;
        displayPersonInfo();
        cout << "Patient ID: " << patientID << "\nDisease: " << disease << endl;
    }
};

int main() {
    Patient p;
    p.getPatientInfo();
    p.displayFullDetails();
    return 0;
}



