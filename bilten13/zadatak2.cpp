//Program kojim se unosi n clanova niza, ako je suma clanova parna ispisati najveci clan niza ako nije ispisati najmanji
//Primjer n = 3 clanovi su 1 4 7 ispis je 7 
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin>>n;

  int niz[n];

  int suma = 0, max = niz[0], min = niz[1];

  for(int i = 0; i<n; i++){
    cin>>niz[i];
  }

  for(int i = 0; i<n; i++){
    suma = suma+niz[i];
  }

  if(suma%2==0){
    for(int i = 0; i<n; i++){
      if(niz[i]>max) max = niz[i];
    }
    cout<<max;
  }else{
    for(int i = 0; i<n; i++){
      if(niz[i]<min) min = niz[i];
    }
    cout<<min;
  }
  
  return 0;
}
