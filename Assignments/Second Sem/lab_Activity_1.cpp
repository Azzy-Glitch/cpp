#include <iostream>
using namespace std;
struct employee
{
    long long int num;
    string name;
    float hours;
    double rate;
};
int main()
{
    employee e;
    double gross_salary;
    cout << "Enter name ";
    cin >> e.name;
    cout << endl << "Enter num ";
    cin >> e.num;
    cout << endl << "Enter hours ";
    cin >> e.hours;
    cout << endl << "Enter rate ";
    cin >> e.rate;

    gross_salary = e.hours * e.rate;

    cout << "Number " << e.num << endl;
    cout << "Name " << e.name << endl;
    cout << "Hours " << e.hours << endl;
    cout << "Rate " << e.rate << endl;
    cout << "Gross_salary " << gross_salary << endl;

    return 0;
}
