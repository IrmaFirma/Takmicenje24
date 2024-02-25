#include <iostream>
using namespace std;
//Napisati program koji ce za uneseni prirodni broj n<1000 ispisati sve proste brojeve u intervalu n,2n.
//Primjer: 10 ispis treba biti 11 13 17 19

bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i<n/2; i++){
    if(n%i == 0) jeProst = false;
  }
  return jeProst;
}

int main() {

  int n;
  cin>>n;
  for(int i = n; i<=2*n; i++){
    if(jeProst(i)) cout<<i<<" ";
  }

  return 0;
}
