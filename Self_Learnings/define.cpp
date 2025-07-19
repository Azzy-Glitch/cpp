#include<iostream>

using namespace std;

#define Azzy int // Replacing INTEGER with Azzy

int main(){

    Azzy a = 10; // INTEGER is replaced with Azzy
    cout << a << endl; // Output: 10

return 0;
}
// if i want to create a file with the name Azzy, i can use the following command
// g++ -x c++ demo.Azzy -o demo