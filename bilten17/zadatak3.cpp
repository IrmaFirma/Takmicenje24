#include <iostream>
#include <vector>
using namespace std;
/* Rijesiti diofantovu jednacinu oblika ax+by = c za promjenjive x i y u intervalu x=(9...20) i y(9...20). Programom unijeti parametre a b i c te odrediti i ispisati cjelobrojna rjesenja x i y u pomenutom intervalu. */
// Primjer: a = 35 b = 45 c = 1000 rjesenja su x = 17 i y = 9

int main() {
    // Unos parametara a, b, c
    int a, b, c;
    cout << "Unesite parametre a, b, c: ";
    cin >> a >> b >> c;

    vector<pair<int, int>> res;

    // Pronalaženje rješenja za x u intervalu [9, 20]
    for (int x = 9; x <= 20; x++) {
        // Izračunavanje odgovarajuće vrijednosti y
        int y = (c - a * x) / b;

        if ((c - a * x) % b == 0 && y >= 9 && y <= 20) {
            res.push_back(make_pair(x, y));
        }
    }

    // Ispis rezultata
    cout << "Rjesenja Diofantove jednacine " << a << "x + " << b << "y = " << c << " u intervalu [9, 20] su:\n";
    for (const auto &res1 : res) {
        cout << "x = " << res1.first << ", y = " << res1.second <<endl;
    }

    return 0;
}
