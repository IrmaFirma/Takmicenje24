#include <iostream>
#include <cmath> // Za funkciju sqrt
using namespace std;
/*Napisi program za rjesavanje kvadratne jednacine ax^2+bx+c Ulazni podaci se ucitavaju sa tastature i to su koeficijenti jednacine a, b, c.*/
//Primjer: 2 2 2, ispis x1 = 6.5 i x2=-7.5

int main() {
    // Unos koeficijenata a, b, c
    cout << "Unesite koeficijente kvadratne jednacine (a b c): ";
    double a, b, c;
    cin >> a >> b >> c;

    // Izračun diskriminante
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Dva realna rješenja
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Dva realna rjesenja kvadratne jednacine: x1 = " << x1 << ", x2 = " << x2 << endl;
    } else if (discriminant == 0) {
        // Jedno realno rješenje
        double x = -b / (2 * a);
        cout << "Jedno realno rjesenje kvadratne jednacine: x = " << x << endl;
    } else {
        // Dva kompleksna rješenja
        double realniDio = -b / (2 * a);
        double imaginarniDio = sqrt(-discriminant) / (2 * a);
        cout << "Dva kompleksna rjesenja kvadratne jednacine: x1 = " << realniDio << " + " << imaginarniDio << "i, ";
        cout << "x2 = " << realniDio << " - " << imaginarniDio << "i" << endl;
    }

    return 0;
}
