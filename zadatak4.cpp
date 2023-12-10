#include <iostream>
using namespace std;
/* napisati program bez koristenja posebnih funkcija za izracunavanje faktorijela prirodnog broja n pri cemu je 1<=n<=100 */
// Primjer: za ulaz 6 ispis treba biti 720 

int main() {
    // Unos broja n
    int n;
    cout << "Unesite prirodan broj n (1 <= n <= 100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Neispravan unos. Broj n mora biti u opsegu od 1 do 100." << endl;
        return 1;  
    }

    // Inicijalizacija faktorijela na 1
    long long faktorijel = 1;

    // Računanje faktorijela
    for (int i = 1; i <= n; ++i) {
        faktorijel *= i;
    }

    // Ispis rezultata
    cout << "Faktorijel broja " << n << " je: " << faktorijel << endl;

    return 0;
}
