#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    cout << "static_cast<double>(25) = "
         << static_cast<double>(25)
         << endl;
    return 0;
}