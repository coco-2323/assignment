//lawrence Njeru//
//week 9//
//bcs-05-0066/2025//

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter Vehicle Brand: ";
        getline(cin, brand);

        cout << "Enter Year of Manufacture: ";
        cin >> year;
        cin.ignore();
    }

    void displayVehicle() {
        cout << "\n--- Vehicle Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int numberOfDoors;
    float engineCapacity;

public:
    void inputCar() {
        inputVehicle();

        cout << "Enter Number of Doors: ";
        cin >> numberOfDoors;

        cout << "Enter Engine Capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c;

    cout << "Enter Car Details" << endl;
    c.inputCar();

    cout << "\nCar Information" << endl;
    c.displayCar();

    return 0;
}
