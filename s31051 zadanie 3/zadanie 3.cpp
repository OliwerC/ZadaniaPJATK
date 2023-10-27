#include <iostream>
using namespace std;

int main()
{
    int n, wynik;
    int liczba_poprzednia = 1;
    int liczba_n = 1;
    
    cout << "Podaj ktora liczbe Fibonacciego wypisac" << endl;
    cin >> n;
    if (n == 1 || n == 2) 
   {
       cout << n << " liczba fibonnaciego to " << 1;
   }
    else{
        for (int i=3; i<=n; i++)
            {
             wynik = liczba_poprzednia + liczba_n;
             liczba_poprzednia = liczba_n;
             liczba_n = wynik;
            }
            cout << n << " liczba fibonnaciego to " << wynik;
        }
    
}
