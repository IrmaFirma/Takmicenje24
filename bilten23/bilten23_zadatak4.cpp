#include <iostream>
using namespace std;
// Napisati program koji ce za uneseni prirodni broj n<1000 ispisati sve proste brojeve i njihovu sumu u intervalu (n, 2n). Ako se unese broj manji od 1 i veci od 1000 ispisati poruku "Greska".
// Test primjer N=10 --> Prosti brojevi 11 13 17 19 --> Suma prostih brojeva je 60.

int main() {

  int n, sum = 0;
  bool prost;
  cout << "N= ";
  cin >> n;
  if(n<1 || n>1000){
    cout << "Greska.";
    return 0;
  }

  cout<<"Prosti brojevi u intervalu od " << n << " do " << 2*n << " su: ";
  for(int i = n; i<=2*n; i++){
    if(i == 1 || i == 0) continue;
    prost = true;
    for(int j = 2; j<=i/2; j++){
      if(i%j==0){
        prost = false;
        break;
      }
    }
    if (prost == true) {
      cout << i << " ";
      sum+=i;
    }
  }

  cout << endl;

  cout << "Suma prostih brojeva je: " << sum;

  return 0;

}
