#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    
    cout << "My name is Abdul Aziz " << endl;
    cout << "Enter Any Number " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Output Array " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}