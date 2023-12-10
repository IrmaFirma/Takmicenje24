#include <iostream>
using namespace std;
/* napisati program koji ce sabirati 2 razlomka ucitana u obliku a/b + c/d ili m (a/b) + n(c/d) ispis treba biti skraceni razlomak f/g mjesoviti broj e (f/g) ili cijeli broj h ako je to rjesenje.  */
//Primjer: 3/8 + 1/8 ispis je 1/2


int main() {
    int a, b, c, d;
    char op;

    cout << "Unesite razlomak u obliku a/b + c/d ili m (a/b) + n(c/d): ";
    cin >> a >> op >> b;

    int numerator, denominator;

    if (op == '/') {
        cout << "Unesite drugi razlomak c/d: ";
        cin >> c >> op >> d;

        // Sabiranje razlomaka
        numerator = a * d + c * b;
        denominator = b * d;
    } else if (op == 'm') {
        cout << "Unesite drugi razlomak c/d: ";
        cin >> c >> op >> d;

        // Pretvaranje mješovitog broja u običan razlomak
        int mixedNumerator = a * b + c;
        int mixedDenominator = b;

        // Sabiranje razlomaka
        numerator = mixedNumerator * d + c * mixedDenominator;
        denominator = mixedDenominator * d;
    } else {
        cout << "Pogresan unos operatora." << endl;
        return 1; // Zavrsava program sa greskom
    }

    // Skraćivanje rezultata
    int gcd = 1;
    for (int i = 1; i <= numerator && i <= denominator; i++) {
        if (numerator % i == 0 && denominator % i == 0) {
            gcd = i;
        }
    }

    numerator /= gcd;
    denominator /= gcd;

    // Ispis rezultata
    cout << "Rezultat: ";
    if (numerator % denominator == 0) {
        cout << numerator / denominator;
    } else {
        cout << numerator << "/" << denominator;
    }
  
    return 0;
}
