//netacan
#include <iostream>
#include <cctype> // Za funkciju isalpha
#include <string>
using namespace std;
/*Zadana je recenica koja se sastoji od jedne rijeci ili vise rijeci medjusobno odvojenih s po jednim razmakom. Napisati program koji ce odrediti skracenicu za zadanu recenicu. Skracenicu ispisati velikim slovima. Skracenice u ovom zadatku radimo tako da redom za svaku rijec iz recenice uzmemo prvo slovo osim ako ta rijec nije jedna od veznika: i  pa te ni niti a ali nego no ili. U tom slucaju rijec ignoriramo. Ako je neki od ovih veznika na pocetku recenice smatramo tu rijec kljucnom te je ubacujemo u skracenicu. Jedini dozvoljeni znakovi pri unosu su mala slova engleske abecede i razmak. Recenica sastoji najvise 100 znakova. 
*/
//Primjer: dragi ucenici i profesori izlaz DUP

int main() {
    // Unos rečenice
    cout << "Unesite recenicu: ";
    string recenica;
    getline(cin, recenica);

    // Inicijalizacija skraćenice
    string skracenica = "";

    // Varijabla koja označava je li trenutna riječ veznik
    bool jeVeznik = false;

    // Iteracija kroz svaki znak u rečenici
    for (char znak : recenica) {
        // Ako je znak razmak, označi da slijedi nova riječ
        if (isspace(znak)) {
            jeVeznik = false;
            continue;
        }

        // Ako je znak slovo
        if (isalpha(znak)) {
            // Ako je trenutna riječ veznik, preskoči
            if (jeVeznik) {
                jeVeznik = false;
                continue;
            }

            // Ako je znak prvo slovo riječi ili prvo slovo nakon veznika na početku rečenice
            if (isspace(skracenica.back()) || skracenica.empty()) {
                if (znak == 'i' || znak == 'a' || znak == 'o') {
                    jeVeznik = true;
                } else {
                    skracenica += toupper(znak);
                }
            } else {
                // Dodaj prvo slovo svake riječi u skraćenicu
                skracenica += toupper(znak);
            }
        }
    }

    // Ispis skraćenice
    cout << "Skracenica: " << skracenica << endl;

    return 0;
}
