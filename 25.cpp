#include <iostream>

using namespace std;

string tekst = "test abc test Irena ul";
char samogloski[12] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
int licznik = 0;

int main()
{
    for (int i = 0; i < tekst.length(); i++) {
        for (int j = 0; j < 12; j++) {
            if(tekst[i] == samogloski[j]) licznik++;
        }
    }
    cout << "Samoglosek w tym tekscie jest: " << licznik << endl;
}
