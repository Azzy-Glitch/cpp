#include <iostream>

using namespace std;

struct teacher
{
    int t_id;
    char t_name[50];
    float salary;
};
teacher t[4];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter id " << endl;
        cin >> t[i].t_id;

        cout << "Enter name " << endl;
        cin >> t[i].t_name;

        cout << "Enter salary " << endl;
        cin >> t[i].salary;
    }

    int id;
    cout << "Enter id to find in database ";
    cin >> id;
    for (int i = 0; i < 4; i++)
    {
        if (id = t[i].t_id)
        {
            cout << "Teacher id found  " << t[i].t_id 
            << " Name " << t[i].t_name << " Salary " 
            << t[i].salary << endl;
            break;
        }
        else
        {
            cout << " Id Not Found " << endl;
        }
    }

    return 0;
}