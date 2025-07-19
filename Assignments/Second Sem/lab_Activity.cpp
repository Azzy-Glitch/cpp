#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int  AverageValue = arr[0];
    for (int i = 1; i < 5; i++)
    {
        AverageValue += arr[i];
    }

    AverageValue /= 5;
    int *ptr = &AverageValue;
    cout << "The average value is: " << *ptr << endl;
    return 0;
}
