#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Diofantova jednacina

bool jeArmstrong(int n){
  bool jeArmstrong = false;
  int a = n/100; //stotice;
  int b = (n/10)%10; //desetice;
  int c = n % 10; //jedinice;

  if(pow(a, 3) + pow(b, 3) + pow(c, 3) == n) jeArmstrong = true;

  return jeArmstrong;
  
}

int main() {

  int a, b;
  cin>>a>>b;

  int brojac = 0;

  for(int i = a; i<=b; i++){
    if(a<100 or b<100){
      cout<<"greska ";
      break;
    };
    if(jeArmstrong(i)){
      cout<<i<<" ";
      brojac++;
    }
  }

  cout<<"Ukupno: "<<brojac;
  
  return 0;
}
