#include <iostream>
using namespace std;
/* Napisi program koji ce ispisati najveci neparni djelilac ucitanog parnog prirodnog broja.*/
//Primjer. 48 ispis je 3

int main() {
    // Unos parnog prirodnog broja
    cout << "Unesite parni prirodan broj: ";
    int broj;
    cin >> broj;

    // Provjera je li broj zaista paran
    if (broj % 2 == 0) {
        // Pronalaženje najvećeg neparnog djelioca
        for (int i = broj / 2; i >= 1; i--) {
            if (broj % i == 0 && i % 2 != 0) {
                cout << "Najveci neparni djelilac: " << i << endl;
                break;
            }
        }
    } else {
        cout << "Uneseni broj nije paran." << endl;
    }

    return 0;
}
