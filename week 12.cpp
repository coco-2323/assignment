//lawrence Njeru//
//bcs-05-0066/2025//
//wekk 12//
#include <iostream>
#include <string>
using namespace std;

// Abstract class
class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    MedicalStaff(string name, int id) {
        staffName = name;
        staffID = id;
    }

    // Pure virtual function
    virtual void calculateSalary() = 0;

    // Non-virtual function
    void displayDetails() {
        cout << "\nStaff Name: " << staffName << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

// Derived class: Doctor
class Doctor : public MedicalStaff {
private:
    float basicSalary, allowance;

public:
    Doctor(string name, int id, float salary, float allow)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        allowance = allow;
    }

    void calculateSalary() override {
        float totalSalary = basicSalary + allowance;
        cout << "Doctor Salary: " << totalSalary << endl;
    }
};

// Derived class: Nurse
class Nurse : public MedicalStaff {
private:
    float basicSalary, overtimePay;

public:
    Nurse(string name, int id, float salary, float overtime)
        : MedicalStaff(name, id) {
        basicSalary = salary;
        overtimePay = overtime;
    }

    void calculateSalary() override {
        float totalSalary = basicSalary + overtimePay;
        cout << "Nurse Salary: " << totalSalary << endl;
    }
};

int main() {
    MedicalStaff *staff;

    Doctor d("Dr. John", 101, 80000, 15000);
    Nurse n("Mary", 201, 40000, 5000);

    staff = &d;
    staff->displayDetails();
    staff->calculateSalary();

    staff = &n;
    staff->displayDetails();
    staff->calculateSalary();

    return 0;
}
