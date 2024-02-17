#include <iostream>
using namespace std;


bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i <= n/2; i++){  
    if(n%i==0) jeProst = false;
  }
  return jeProst;
  
}
int main() {

  int n, broj1, broj2;
  int rezultat = 0;
  cin >> n; 
  
  for(int i = 2; i <= n-1; i++){  
    if(jeProst(i)) broj1 = i;
  }

  for(int i = n*n; i>n; i--){
    if(jeProst(i)) broj2 = i;
  }

  int razlika = abs(n-broj1);
  int razlika2 = abs(broj2-n);

  if(razlika < razlika2) rezultat = broj1;
  else rezultat = broj2;

  if(jeProst(n)) cout<<n;
  else cout<<rezultat;


  return 0; 
}
