#include <iostream>
#include <algorithm>
using namespace std;
/*Napisati program koji za 4 unesena cijela broja izvrsava slj trasnformacije: ako je max od ta 4 broja >= 500 tada se x i y umanjuje za 50 inace se svaki od brojeva x y z k umanji za svoju cifru jedinica. U prvom redu ispisati novodobijene brojeve a u drugom sumu novodobijenih brojeva*/
//Primjer: 63 12 82 30 izlaz: 60 10 80 30 i 180

int main() {
    // Unos 4 cijela broja
    cout << "Unesite 4 cijela broja: ";
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    // Provjera maksimalnog broja
    int maxNumber = max({x, y, z, k});

    if (maxNumber >= 500) {
        x -= 50;
        y -= 50;
    } else {
        x -= x % 10;
        y -= y % 10;
        z -= z % 10;
        k -= k % 10;
    }

    cout << "Novodobijeni brojevi: " << x << " " << y << " " << z << " " << k << endl;

    int sum = x + y + z + k;
    cout << "Suma novodobijenih brojeva: " << sum << endl;

    return 0;
}
