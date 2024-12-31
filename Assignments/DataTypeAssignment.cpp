#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables and initialize them
    string fullName = "Abdul Aziz";
    int age = 20;
    double height = 1.7;
    char initial = 'A';
    bool isStudent = true;

    cout << "\n\t\t     -------- Initial Information --------" << endl;
    cout << "\n\t\t     Full Name: " << fullName << endl;
    cout << "\t\t     Your Age: " << age << endl;
    cout << "\t\t     Your Height: " << fixed << setprecision(2) << height << " meters" << endl;
    cout << "\t\t     First Letter of Your Name is: " << initial << endl;
    cout << "\t\t     Is Student: " << isStudent << endl;

    // Use getline to handle spaces in names
    cout << "\n\t\t     Enter your full name: ";
    getline(cin, fullName);

    // Getting inputs
    cout << "\n\t\t     Enter your age: ";
    cin >> age;

    cout << "\n\t\t     Enter your height in meters: ";
    cin >> height;

    cout << "\n\t\t     Enter the first letter of your name: ";
    cin >> fullName;

    char isStudentInput;
    cout << "\n\t\t     Are you a student? (y/n): ";
    cin >> isStudentInput;
    isStudent = (isStudentInput == 'y' || isStudentInput == 'Y');

    // Output the values of all variables
    cout << "\n\t\t     -------- Initial Information --------" << endl;
    cout << "\n\t\t     Full Name: " << fullName << endl;
    cout << "\t\t     Your Age: " << age << endl;
    cout << "\t\t     Your Height: " << fixed << setprecision(2) << height << " meters" << endl; // Format height to 2 decimal places
    cout << "\t\t     First Letter of Your Name is: " << fullName << endl;
    cout << "\t\t     Is Student: " << isStudent << endl;

    // Add 5 years to age and output the new value
    age += 5;
    cout << "\n\t\t     -------- After 5 Years --------" << endl;
    cout << "\n\t\t     Updated Age: " << age << endl;

    // Modify isStudent and print the updated value
    isStudent = false; // Set to false
    cout << "\n\t\t     -------- Student Status Change --------" << endl;
    cout << "\n\t\t     Is Student: " << isStudent << endl;

    // Declare a constant PI and calculate the area of a circle
    const double PI = 3.14159;
    double radius = 5.0;
    double area = PI * radius * radius;

    cout << "\n\t\t    -------- Circle Calculation --------" << endl;
    cout << "\n\t\t    Area of a circle with radius " << radius << " is: " << fixed << setprecision(2) << area << endl;

    cout << endl;
    return 0;
}