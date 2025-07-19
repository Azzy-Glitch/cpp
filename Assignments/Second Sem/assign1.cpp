#include <iostream>
using namespace std;

// Q5 - Function to calculate sum of all elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Q6 - Count even and odd using reference parameters
void countEvenOdd(int arr[], int size, int &even, int &odd) {
    even = 0;
    odd = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
}

// Q7 - Return square of a number
int square(int num) {
    return num * num;
}

// Q8 - Convert Celsius to Fahrenheit
float toFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Q9 - Check leap year
bool isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " numbers: ";
    for(int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Q1 - Count positive and negative numbers
    int positive = 0, negative = 0;
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
    }
    cout << "Q1: Positive = " << positive << ", Negative = " << negative << endl;

    // Q2 - Difference between even and odd index sums
    int evenIndexSum = 0, oddIndexSum = 0;
    for(int i = 0; i < SIZE; i++) {
        if(i % 2 == 0)
            evenIndexSum += arr[i];
        else
            oddIndexSum += arr[i];
    }
    cout << "Q2: Difference (even - odd index sum) = " << (evenIndexSum - oddIndexSum) << endl;

    // Q3 - Print array in reverse
    cout << "Q3: Reverse of the array: ";
    for(int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Q4 - Count even and odd numbers
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    cout << "Q4: Even = " << evenCount << ", Odd = " << oddCount << endl;

    // Q5 - Sum of array elements
    int totalSum = sumArray(arr, SIZE);
    cout << "Q5: Sum of all elements = " << totalSum << endl;

    // Q6 - Count even and odd using reference parameters
    int even = 0, odd = 0;
    countEvenOdd(arr, SIZE, even, odd);
    cout << "Q6: Even = " << even << ", Odd = " << odd << " (using reference)" << endl;

    // Q7 - Square of a number
    int number;
    cout << "Q7: Enter a number to square: ";
    cin >> number;
    cout << "Square of " << number << " = " << square(number) << endl;

    // Q8 - Convert Celsius to Fahrenheit
    float celsius;
    cout << "Q8: Enter temperature in Celsius: ";
    cin >> celsius;
    cout << celsius << " Celsius = " << toFahrenheit(celsius) << " Fahrenheit" << endl;

    // Q9 - Check leap year
    int year;
    cout << "Q9: Enter a year to check for leap year: ";
    cin >> year;
    if(isLeapYear(year))
        cout << year << " is a Leap Year" << endl;
    else
        cout << year << " is NOT a Leap Year" << endl;

    return 0;
}
