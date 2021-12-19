#include <iostream>
#include <string>

using namespace std;

void konwersja(int a)
{
    if(a > 0)
    {
        konwersja(a / 2);
        cout << a % 2;
    }
}

int main()
{
    string input;
    int inputInt;
    cout << "Podaj liczbe: " << endl;
    cin >> input;
    cout << endl << "W zapisie dwojkowym jest to: ";
    inputInt = stoi(input);
    konwersja(inputInt);
}
