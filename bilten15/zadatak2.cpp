#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {

  int x, y, z, k;
  cin>>x>>y>>z>>k;

  if(max({x, y, z, k}) >=500){
    x = x - 50;
    y = y - 50;
  }else{
    x = x - (x%10);
    y = y - (y%10);
    z = z - (z%10);
    k = k - (k%10);
    cout<<x<<" "<<y<<" "<<z<<" "<<k<<endl;
    cout<<x+y+z+k;
  }

  return 0;
}
