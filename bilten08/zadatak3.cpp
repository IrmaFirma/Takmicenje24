//Program koji pronalazi najveci neparni djelilac unesenog broja
//Primjer n = 48 ispis je 3

#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int n1;
  int gcd = 0;
  cin>>n1;

  for(int i = n1; i>=2; i--){
    if((n1%i==0) && (i%2!=0)) {
      gcd = i;
    }
  }

  cout<<gcd;

  return 0;
}
