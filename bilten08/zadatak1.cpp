#include <iostream>
#include <cmath> // Za funkciju sqrt
using namespace std;
/*Napisi program za izracunavanje rastojanja dvije proizvoljne tacke u trodimenzionalnom koordinatnom sistemu. Ulazni podaci koji se ucitavaju sa tastature su koordinate tacaka T1(x1,y1,z1) i T2(x2,y2,z2) */
//Primjer: ulaz T(0,0,0) T2(3,4,5) ispis 7.07

int main() {
    // Unos koordinata tačke T1
    cout << "Unesite koordinate tacke T1 (x1 y1 z1): ";
    double x1, y1, z1;
    cin >> x1 >> y1 >> z1;

    // Unos koordinata tačke T2
    cout << "Unesite koordinate tacke T2 (x2 y2 z2): ";
    double x2, y2, z2;
    cin >> x2 >> y2 >> z2;

    // Izračun udaljenosti
    double udaljenost = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    // Ispis rezultata
    cout << "Udaljenost izmedju tacaka T1 i T2: " << udaljenost << endl;

    return 0;
}
