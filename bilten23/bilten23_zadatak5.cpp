#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* S tastature unosimo jedan cetverocifren ili sestocifren cijeli broj. Provjeriti da li je uneseni broj vampirski broj. Ukoliko jeste ispisati: Broj x je vampirski broj. Ocnjaci su: pa ispisati njegove ocnjake. Vampirski broj je slozeni prirodni broj v = x*y s n cifara gdje je n paran prirodan broj koji se moze napisati kao umnozak dvaju faktora x i y koji svaki ima dva puta manje cifara te sadrzi sve cigre tih dvaju faktora bez obzira na njihov redoslijed. Ocnjaci moraju biti formirani od cifara unesenog broja. Redoslijed ispisa ocnjaka nije bitan. */
//Primjer: 1260 je vampirski broj, ocnjaci su 21 i 60.

int main() {
    // Unos broja
    int broj;
    cout << "Unesite cetverocifren ili sestocifren broj: ";
    cin >> broj;

    // Pretvaranje broja u niz cifara
    vector<int> digits;
    int temp = broj;
    while (temp > 0) {
        digits.push_back(temp % 10);
        temp /= 10;
    }
    reverse(digits.begin(), digits.end());

    // Provjera za sve moguće kombinacije faktora
    int n = digits.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int factor1 = digits[i] * 10 + digits[j];
                int factor2 = 0;
                for (int k = 0; k < n; ++k) {
                    if (k != i && k != j) {
                        factor2 = factor2 * 10 + digits[k];
                    }
                }

                // Provjera da li je proizvod faktora jednak unesenom broju
                if (factor1 * factor2 == broj) {
                    // Ispis rezultata
                    cout << "Broj " << broj << " je vampirski broj. Ocnjaci su: "
                              << factor1 << " i " << factor2 << endl;
                    return 0;
                }
            }
        }
    }

    // Ako nema odgovarajućih faktora, nije vampirski broj
    cout << "Broj " << broj << " nije vampirski broj." << endl;

    return 0;
}
