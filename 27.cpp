#include <iostream>

using namespace std;

string tekst = "JEDEN DWA TRZY CZTERY PIEC";
string zdanie[100];
int licznikSlow = 0;
string slowo = "";

int main()
{
    for (int i = 0; i < tekst.length(); i++)
    {
        if(tekst[i] != ' ')
        {
            slowo += tekst[i];
        }
        else
        {
            licznikSlow++;
            zdanie[licznikSlow] = slowo;
            cout << endl << slowo;
            slowo = "";
        }
    }
    licznikSlow++;
    zdanie[licznikSlow] = slowo;
    cout << endl << slowo << endl;
    slowo = "";
}
