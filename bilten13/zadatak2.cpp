//Program kojim se unosi n clanova niza, ako je suma clanova parna ispisati najveci clan niza ako nije ispisati najmanji
//Primjer n = 3 clanovi su 1 4 7 ispis je 7 


#include <iostream>
using namespace std;

int main() {

  int n; 
  cin>>n;
  int niz[n];

  for(int i = 0; i<n; i++){
    cin>>niz[i];
  }

  int suma = 0;
  int max = niz[0];
  int min = niz[1];

  for(int i = 0; i<n; i++){
    suma += niz[i];
    if(niz[i]>max) max = niz[i];
    if(niz[i]<min) min = niz[i];
  }

  if(suma % 2 == 0){
    cout<<max;
  }else{
    cout<<min;
  }


  return 0; 
}
