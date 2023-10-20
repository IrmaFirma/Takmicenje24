#include <iostream>
using namespace std;
//Napisati program koji ce ucitati niz N prirodnih brojeva, a zatim ispisati sve clanove niza koji su djeljivi s brojem X i izracunati sumu tih clanova. 
//Test primjer (Broj clanova niza: 3, Clanovi niza: 1 4 6 Broj X: 2)

int main() {

  int n, x, sum = 0;
  cout << "Unesite broj clanova niza: ";
  cin >> n;
  cout << "Unesite " << n << " clanova: " <<endl;
  int niz[n];

  for (int i = 0; i<n; i++){
    cout << "Unesite " << i + 1 << ". broj: ";
    cin >> niz[i];
  }

  cout << "Unesite broj X: ";
  cin >> x; 

  cout << "Clanovi niza djeljivi sa X su: ";
  for(int i = 0; i<n; i++){
    if(niz[i] % x == 0) {
      sum+=niz[i];
      cout << niz[i] << " ";
    }
  }
  cout << endl;
  cout << "Suma clanova niza djeljivih sa X je: " << sum; 

  return 0;

}
