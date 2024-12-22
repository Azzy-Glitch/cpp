#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp[6];
    string list[10][6] = {
        {"1011", "Ali", "Ahmed", "3.2", "720", "728"},
        {"1031", "Akash", "Usman", "2.6", "620", "52"},
        {"1019", "Jamal", "Hussain", "4.0", "890", "98"},
    };

    int numRecords = 3;

    cout << "Sr.no\tRoll No\t\tName\t\tFather Name\tGPA\t\tMarks\n";
    for (int i = 0; i < numRecords; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 6; j++)
        {
            cout << list[i][j] << "\t\t";
        }
        cout << endl;
    }

    for (int i = 0; i < numRecords - 1; i++)
    {
        for (int j = i + 1; j < numRecords; j++)
        {
            if (stof(list[i][3]) < stof(list[j][3]))
            {
                for (int k = 0; k < 6; k++)
                {
                    temp[k] = list[i][k];
                    list[i][k] = list[j][k];
                    list[j][k] = temp[k];
                }
            }
        }
    }

    cout << "\n\nLIST GENERATED AFTER SORTING....\n\n";

    cout << "Sr.no\tRoll No\t\tName\t\tFather Name\tGPA\t\tMarks\n";
    
    for (int i = 0; i < numRecords; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 6; j++)
        {
            cout << list[i][j] << "\t\t";
        }
        cout << endl;
    }

    return 0;
}
