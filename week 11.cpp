//lawrence Njeru//
//week 9//
//bcs-05-0066/2025//

#include <iostream>

using namespace std;

class Employee {
private:
    string employeeName;
    int employeeID;
    float basicSalary;
    float netSalary;

public:
    // Input employee details
    void setEmployeeDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, employeeName);

        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Calculate net salary
    void calculateSalary() {
        netSalary = basicSalary + (0.10 * basicSalary);
    }

    // Display employee details
    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee emp;

    emp.setEmployeeDetails();
    emp.calculateSalary();
    emp.displayEmployeeDetails();

    return 0;
}
