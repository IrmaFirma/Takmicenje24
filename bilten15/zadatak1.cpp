#include <iostream>
using namespace std;
/*Napisati program kojim se za dati prirodan broj n formira broj i sastavljen od istih cifara ali u inverznom poretku*/
//Primjer unos: 1234 ispis: 4321

int main() {
    // Unos broja n
    cout << "Unesite prirodan broj n: ";
    int n;
    cin >> n;

    // Provjera je li uneseni broj pozitivan
    if (n <= 0) {
        cout << "Uneseni broj mora biti pozitivan." << endl;
        return 1;
    }

    // Formiranje broja u inverznom poretku
    int reversedNumber = 0;
    int originalNumber = n;

    while (originalNumber > 0) {
        int digit = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + digit;
        originalNumber /= 10;
    }

    // Ispis rezultata
    cout << "Broj sastavljen od istih cifara, ali u inverznom poretku: " << reversedNumber << endl;

    return 0;
}

