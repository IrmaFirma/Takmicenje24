#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool jeProst(long long int n){
  bool jeProst = true;
  for(int i = 2; i<=n/2; i++){
    if(n%i==0) jeProst = false;
  }
  return jeProst;
}

int main() {

  long long int n;
  cin >> n;

  for(long long int i = n - 1; i>=1000000; i--){
    if(jeProst(i)){
      cout<<i<< " ";
      if(jeProst(i-2)) cout<<i-2;
      break;
    }
  }
  
  return 0;
}
