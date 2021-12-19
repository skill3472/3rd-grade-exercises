#include <iostream>
#include <stdio.h>

using namespace std;

int Newton(int n, int k)
{
    int wynik = 1;
    int i;
    for(i = 1; i <= k; i++)
    {
        wynik = wynik * ( n - i + 1 ) / i;
    }
    return wynik;
}

int main(void)
{
    int n, k;
    cin >> n;
    cin >> k;
    if(k == 0 || k == n) puts("1");
    else cout << Newton(n, k) << endl;
}
