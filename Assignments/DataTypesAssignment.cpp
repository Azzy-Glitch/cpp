#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables and initialize them (with user input)
    string fullName;
    int age;
    double height;
    char initial;
    bool isStudent;

    // Use getline to handle spaces in names
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Enter the first letter of your name: ";
    cin >> initial;

    char isStudentInput;
    cout << "Are you a student? (y/n): ";
    cin >> isStudentInput;
    isStudent = (isStudentInput == 'y' || isStudentInput == 'Y');

    // Output the values of all variables
    cout << "\n\t\t-------- Initial Information --------" << endl;
    cout << "\n\t\tFull Name: " << fullName << endl;
    cout << "\t\tYour Age: " << age << endl;
    cout << "\t\tYour Height: " << fixed << setprecision(2) << height << " meters" << endl; // Format height to 2 decimal places
    cout << "\t\tInitial: " << initial << endl;
    cout << "\t\tIs Student: " << isStudent << endl;

    // Add 5 years to age and output the new value
    age += 5;
    cout << "\n\t\t-------- After 5 Years --------" << endl;
    cout << "\n\t\tUpdated Age: " << age << endl;

    // Modify isStudent and print the updated value
    isStudent = false; // Set to false
    cout << "\n\t\t-------- Student Status Change --------" << endl;
    cout << "\n\t\tIs Student: " << isStudent << endl;

    // Declare a constant PI and calculate the area of a circle
    const double PI = 3.14159;
    double radius = 5.0;
    double area = PI * radius * radius;

    cout << "\n\t\t-------- Circle Calculation --------" << endl;
    cout << "\n\t\tArea of a circle with radius " << radius << " is: " << fixed << setprecision(2) << area << endl;

    cout << endl;
    return 0;
}