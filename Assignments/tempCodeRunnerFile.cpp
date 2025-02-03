#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 1, b = 1, c;

    cout << a << endl
         << b;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    return 0;
}