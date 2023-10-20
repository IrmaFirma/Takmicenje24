#include <iostream>
using namespace std;
// Napisati program koji ce za ucitani niz od N brojeva (pri cemu N ne smije biti vece od 100) ispisati najmanji i najveci clan niza i sumu najmanjeg i najveceg clana
// Test primjer: Broj clanova niza: 5 Clanovi niza: 2 4 6 9 44 ---> Najmanji clan niza je 2 -- Najveci clan niza je 44 -- Suma najmanjeg i najveceg clana je 46


int main() {

  int n;
  cout << "Unesite broj clanova niza: ";
  cin >> n;
  int niz[n];

  if(n<100){
    for(int i = 0; i<n; i++){
      cout << "Unesite broj: ";
      cin >> niz[i];
    }
  }

  int max = niz[0]; 
  int min = niz[1];
  for(int i = 0; i<n; i++){
    if(niz[i]>max) max = niz[i];
    if(niz[i]<min) min = niz[i];
  }

  int sum = max + min;
  cout << "Najmanji clan niza je " << min << endl;
  cout << "Najveci clan niza je " << max << endl;
  cout << "Suma najmanjeg i najveceg clana je " << sum;


  return 0;

}
