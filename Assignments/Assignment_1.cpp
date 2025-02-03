#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "ASCII Value of '" << ch << "' is: " << int(ch) << endl;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << "The character is a vowel." << endl;
        }
        else
        {
            cout << "The character is a consonant." << endl;
        }
    }
    else
    {
        cout << "The character is neither a vowel nor a consonant." << endl;
    }

    cin.ignore();

    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int vowelCount = 0;
    for (char c : sentence)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vowelCount++;
        }
    }
    cout << "Number of vowels in the entered sentence: " << vowelCount << endl;

    return 0;
}