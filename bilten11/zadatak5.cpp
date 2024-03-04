#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a1, a2;
  int b1, b2;

  cin>>a1>>a2;
  cin>>b1>>b2;

  double d = sqrt(pow(a1-b1, 2) + pow(a2-b2, 2));

  cout<<fixed<<setprecision(2)<<d;

  return 0;
}
