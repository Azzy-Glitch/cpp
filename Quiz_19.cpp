#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp[3];
    string list[44][3] = {
        {"1005", "Atiqa", "7"},
        {"1006", "Adan", "16.5"},
        {"1010", "Ali", "12"},
        {"1011", "Ali", "8"},
        {"1012", "Alisha", "Absent"},
        {"1015", "Arwah", "14"},
        {"1017", "Baber", "14.5"},
        {"1028", "Bareea", "14.5"},
        {"1021", "Basit", "11"},
        {"1022", "Bilal", "Absent"},
        {"1024", "DureAdan", "5"},
        {"1027", "Ghulam", "5.5"},
        {"1028", "Ghulam", "8.5"},
    };

    int numRecords = 13;

    cout << "Sr.no\tRoll No\t\tName\t\tMarks\n";
    for (int i = 0; i < numRecords; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 3; j++)
        {
            cout << list[i][j] << "\t\t";
        }
        cout << endl;
    }

    for (int i = 0; i < numRecords - 1; i++)
    {
        for (int j = i + 1; j < numRecords; j++)
        {
            if (list[i][2] != "Absent" && list[j][2] != "Absent")
            {
                if (stof(list[i][2]) < stof(list[j][2]))
                {
                    for (int k = 0; k < 3; k++)
                    {
                        temp[k] = list[i][k];
                        list[i][k] = list[j][k];
                        list[j][k] = temp[k];
                    }
                }
            }
        }
    }

    cout << "\n\nLIST GENERATED AFTER SORTING....\n\n";

    cout << "Sr.no\tRoll No\t\tName\t\tMarks\n";
    for (int i = 0; i < numRecords; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 3; j++)
        {
            cout << list[i][j] << "\t\t";
        }
        cout << endl;
    }

    return 0;
}
