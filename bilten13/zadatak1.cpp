//Napisati program koji izracunava y za unesenu varijablu x po odredjenim parametrima
//Primjer x = 7.7 ispis je 77

#include <iostream>
using namespace std;

int main() {

  double x;
  cin>>x;

  int y = 0;

  if(x<0){
    y = -10;
  }else if(0<=x<1){
    y = 1000 * x;
  }else if(1<=x<10){
    y = 10*x;
  }else if(x>=10){
    y = x/10;
  }

  cout<<y;


  return 0; 
}
