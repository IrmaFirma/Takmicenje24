#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i<=n/2; i++){
    if(n%i==0) jeProst = false;
  }
  return jeProst;
}

int main() {

  int n, a;
  cin>>n>>a;

  int i = 0;

  while(i!=a){
    for(int j = n; j<n*2; j++){
      if(jeProst(j)){
        cout<<j<<","<<j+2<<" ";
      }
    }
    i++;
  }


  return 0;
}
