#include <iostream>
#include <iomanip> // For fixed and setprecision
using namespace std;

int main()
{
    // Declare variables
    int a = 10;    // Integer variable
    float b = 20.5; // Float variable

    // Display initial values
    cout << "Before typecasting:" << endl;
    cout << "Value of a: " << a << endl; // Prints integer a
    cout << "Value of b: " << fixed << setprecision(2) << b << endl; // Prints float b with 2 decimal places

    // Implicit typecasting (b is converted to int when assigned to a)
    a = b;

    cout << "\nAfter implicit typecasting:" << endl;
    cout << "Value of a (float -> int): " << a << endl; // Fractional part of b is truncated
    cout << "Value of b: " << b << endl; // b remains unchanged

    // Explicit typecasting (C-style)
    b = (float)a; // Converts a (int) to float

    cout << "\nAfter explicit typecasting (C-style):" << endl;
    cout << "Value of a: " << a << endl; // Prints integer a
    cout << "Value of b: " << fixed << setprecision(3) << b << endl; // Prints float b with 3 decimal places

    // Explicit typecasting (Function-style)
    b = float(a);

    cout << "\nAfter function-style typecasting:" << endl;
    cout << "Value of b: " << fixed << setprecision(3) << b << endl;

    // Explicit typecasting (C++ style using static_cast)
    b = static_cast<float>(a); // Preferred modern method for typecasting

    cout << "\nAfter C++ style typecasting (static_cast):" << endl;
    cout << "Value of b: " << fixed << setprecision(4) << b << endl; // Prints float b with 4 decimal places

    return 0;
}
