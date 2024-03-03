#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  double a, b, c;
  cin>>a>>b>>c;

  double d = b*b - 4*a*c;

  double x1, x2;

  if(d>0){
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
  }else if(d==0){
    x1 = -b/(2*a);
    x2 = x1;
  }else{
    double r = -b/(2*a);
    double i = sqrt(-d)/(2*a);
    x1 = r+i;
    x2 = r-i;
  }

  cout<<x1<<" "<<x2;

  
  return 0;
}
