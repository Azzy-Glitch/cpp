// Write a program that calculates the factorial of a given umber using a while loop
#include <iostream>
using namespace std;
int main()
{
    int num, i, fact = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial is Not defined for the Negative Numbers: " << endl;
    }
    else if (num == 0)
    {
        cout << "Factorial of 0 is 1" << endl;
    }
    else
    {
        i = 1;
        while (i <= num)
        {
            fact *= i;
            i++;
        }
        cout << "Factorial of " << num << " = " << fact << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num, fact = 1;

//     cout << "Enter a number: ";
//     cin >> num;

//     if (num < 0)
//     {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     }
//     else
//     {
//         int i = num;
//         while (i > 0)
//         {
//             fact *= i;
//             i--;
//         }
//         cout << "Factorial of " << num << " = " << fact << endl;
//     }

//     return 0;
// }
