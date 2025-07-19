#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    cout << " My name is Abdul Aziz " << endl;
    cout << "Enter Any Number " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int min = arr[0];

    cout << "Finding Smallest Number in an array "<< endl;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Smallest value is " << min;

    return 0;
}