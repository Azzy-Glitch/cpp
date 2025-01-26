#include <iostream>

using namespace std;

int main()
{
    char a = 'y';

    while (a == 'y')
    {
        int x = 0, limit = 0;
        cout << "Enter any number: " << endl;
        cin >> x;
        cout << "Enter limit of the Table: " << endl;
        cin >> limit;

        if (x != 0)
        {
            int multiplier = 1;
            while (multiplier <= limit) 
            {
                int table = x * multiplier;
                cout << "Table " << x << " * " << multiplier << " = " << table << endl;
                multiplier++;
            }
        }
        else
        {
            cout << "Multiplication table for 0 is not defined." << endl;
        }

        cout << "Enter ( y ) to Continue ( Press Any Key To Exit ) " << endl;
        cin >> a;
    }
    return 0;
}