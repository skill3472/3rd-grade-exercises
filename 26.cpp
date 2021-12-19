#include <iostream>

using namespace std;

string tekst = "JEDEN DWA TRZY CZTERY PIEC";
string zdanie = "";
int licznikSlow = 0;

int main()
{
    for (int i = 0; i < tekst.length(); i++)
    {
        if(tekst[i] == ' ')
        {
            licznikSlow++;
        }
    }
    licznikSlow++;
    cout << endl << "Slow jest: " << licznikSlow << endl;
}
