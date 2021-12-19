#include <iostream>

using namespace std;

string input = "ABEC";
string reversed = "";

int main()
{
    cout << "Podaj slowo: " << endl;
    cin >> input;
    reversed = input;
    for (int i = 0; i < input.length(); i++)
    {
        reversed[i] = input[input.length() - i - 1];
    }
    if(input == reversed) cout << "To slowo jest palindromem." << endl;
    else cout << "To slowo nie jest palindromem." << endl;
}
