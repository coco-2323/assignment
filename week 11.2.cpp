//lawrence Njeru//
//week 11.2//
//bcs-05-0066/2025//

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    float feeBalance;

public:
    // Input student details
    void inputStudentData() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Admission Number: ";
        getline(cin, admissionNumber);

        cout << "Enter Fee Balance: ";
        cin >> feeBalance;
    }

    // Make fee payment
    void makePayment() {
        float payment;

        cout << "Enter Payment Amount: ";
        cin >> payment;

        feeBalance -= payment;

        if (feeBalance < 0)
            feeBalance = 0;
    }

    // Display updated fee status
    void displayStatus() {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student stu;

    stu.inputStudentData();
    stu.makePayment();
    stu.displayStatus();

    return 0;
}
