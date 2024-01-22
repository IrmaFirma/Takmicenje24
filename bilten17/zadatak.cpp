#include <iostream>
#include <string>
using namespace std;
/* Napisi program kojim se unosi jedna rijec kao string sa malim slovima engleske abecede. Ispisati koliko ima susjednih slova po engleskoj abecedi u ucitanoj rijeci.  */
//Primjer: abakus, ispis 2

int main() {
  // Unos rijeci
  cout << "Unesite rijec sa malim slovima engleske abecede: ";
  string rijec;
  cin >> rijec;

  // Brojanje susjednih slova po abecedi
  int brojac = 1;  // Inicijalizujemo brojac na 1 jer prvo slovo uvek ima jedno susedno slovo
  for (size_t i = 1; i < rijec.length(); i++) {
      if (rijec[i] == rijec[i - 1] + 1) {
          brojac++;
      } else {
          // Ako naiđemo na slovo koje nije susedno prekidamo seriju
          break;
      }
  }

  // Ispis rezultata
  cout << "Broj susjednih slova: " << brojac << endl;

  return 0;
}
