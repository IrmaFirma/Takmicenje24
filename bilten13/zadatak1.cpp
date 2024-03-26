//Napisati program koji izracunava y za unesenu varijablu x po odredjenim parametrima
//Primjer x = 7.7 ispis je 77

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {

  double x, y = 0.0;
  cin>>x;

  if(x<0){
    y = -10;
  }else if(0<=x && x<1){
    y = 1000*x;
  }else if(1<=x && x<10){
    y = 10*x;
  }else if(x>=10){
    y = x/10;
  }

  cout<<y;
  
  return 0;
}
