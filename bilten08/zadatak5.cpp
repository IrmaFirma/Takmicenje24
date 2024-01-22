#include <iostream>
using namespace std;
/*Napisati program koji ce za uneseni prirodni broj n<1000 ispisati sve proste brojeve u intervalu n,2n.*/
//Primjer: 10 ispis treba biti 11 13 17 19

int main() {
    // Unos prirodnog broja n
    cout << "Unesite prirodan broj n (n<1000): ";
    int n;
    cin >> n;

    // Provjera uvjeta
    if (n >= 1000 || n <= 0) {
        cout << "Uneseni broj nije u dozvoljenom rasponu." << endl;
        return 1;
    }

    // Ispis prostih brojeva u intervalu [n, 2n]
    cout << "Prosti brojevi u intervalu [" << n << ", " << 2 * n << "]: ";

    for (int i = n; i <= 2 * n; i++) {
        bool prost = true;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prost = false;
                break;
            }
        }

        if (prost) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
