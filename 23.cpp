#include <iostream>

using namespace std;

string tekst = "mmmrokmmrokmmmmmmmmrokm";
string wzorzec = "rok";

int main()
{
    for (int i = 0; i < tekst.length(); i++) {
        if(tekst[i] == wzorzec[0] && tekst[i+1] == wzorzec[1] && tekst[i+2] == wzorzec[2])
        {
            cout << "Znaleziono wzorzec na " << i << ", " << i+1 << " i " << i+2 << " miejscu." << endl;
        }
    }
}
