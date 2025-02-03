#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int a = 92.75;
    cout << fixed << setprecision(2);
    double x = static_cast<double>(a);
    cout << "static_cast<double>(a) = " << x << endl;
    return 0;
}