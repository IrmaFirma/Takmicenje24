#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {

  double r, a, j, kk;
  cin>>r>>a;

  j = r/a;
  int sum = 0, sum1 = 0;

  for(int i = 1; i<j+1; i++){
    kk = 2*sqrt(r*r-(a*(2*i-1)/2) * (a*(2*i-1)/2));
    sum1 = kk/a;
    if(i==1){
      sum += sum1;
    }else{
      sum += 2*sum1;
    }
  }

  cout<<sum;

  return 0;
}
