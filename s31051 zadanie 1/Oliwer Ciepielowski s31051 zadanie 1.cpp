#include <iostream>
using namespace std;
int main() {
    int granica_dolna, granica_gorna, temp = 1, dzielna = 1, dzielnik;
    cout << "Podaj od ktorej liczby zaczac:" << endl;
    cin >> granica_dolna;
    cout << "Podaj na, ktorej liczbie skonczyc" << endl;
    cin >> granica_gorna;
    cout << endl;
    if (granica_dolna > granica_gorna) {
        temp = granica_dolna;
        granica_dolna = granica_gorna;
        granica_gorna = temp;
    }
    while (dzielna <= granica_gorna) {
        for (dzielnik = 2; dzielnik <= dzielna; dzielnik++) {
            if (dzielna % dzielnik == 0)
            {
                if (dzielna > granica_dolna)
                    if (dzielna == dzielnik) cout << dzielna << endl;
                else break;
            }
        }
        dzielna++;
    }
    return 0;
}