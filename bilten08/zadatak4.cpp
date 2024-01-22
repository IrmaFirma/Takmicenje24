#include <iostream>
using namespace std;
/*Napisi program koji ispisuje broj razlicitih brojeva iz niza ucitanih prirodnih brojeva. Ucitani niz moze imati najvise 50 brojeva.*/
//Primjer: 1 2 3 2 1 izlaz je 3

int main() {
    // Unos niza prirodnih brojeva
    cout << "Unesite prirodne brojeve (do 50 brojeva, unesite -1 za kraj unosa): ";

    const int maksimalnaVelicinaNiza = 50;
    int niz[maksimalnaVelicinaNiza];
    int uneseniBroj;
    int brojElemenata = 0;

    // Učitavanje brojeva sve dok nije unesen -1 ili dostignuta maksimalna veličina niza
    while (cin >> uneseniBroj && uneseniBroj != -1 && brojElemenata < maksimalnaVelicinaNiza) {
        niz[brojElemenata] = uneseniBroj;
        brojElemenata++;
    }

    // Provjera različitih brojeva
    int brojRazlicitih = 0;

    for (int i = 0; i < brojElemenata; i++) {
        bool razlicit = true;

        for (int j = 0; j < i; j++) {
            if (niz[i] == niz[j]) {
                razlicit = false;
                break;
            }
        }

        if (razlicit) {
            brojRazlicitih++;
        }
    }

    // Ispis rezultata
    cout << "Broj razlicitih brojeva u nizu: " << brojRazlicitih << endl;

    return 0;
}
