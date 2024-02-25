#include <iostream>
using namespace std;
/*Napisi program koji ispisuje broj razlicitih brojeva iz niza ucitanih prirodnih brojeva. Ucitani niz moze imati najvise 50 brojeva.*/
//Primjer: n = 5 unos je  1 2 3 2 1 izlaz je 3

int main() {

  int n;
  cin>>n;
  int niz[n];
  int br = 0;

  for(int i = 0; i<n; i++){
    cin>>niz[i];
  }
  
  for(int i = 0; i<n; i++){
    int j;
    for(j = 0; j<i; j++){
      if(niz[i] == niz[j]){
        break;
      }
    }
    if(i==j){
      br++;
    }
  }

  cout<<br;

  return 0;
}
