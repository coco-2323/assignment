//lawrence Njeru//
//week 9//
//bcs-05-0066/2025//

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "\n--- Person Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        displayPerson();
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student s;

    cout << "Enter Student Details" << endl;
    s.inputStudent();

    cout << "\nStudent Information" << endl;
    s.displayStudent();

    return 0;
}
