//Program kojim ispisuje sve proste palindromicne brojeve u intervalu od n - n*2 
//Primjer n = 7 ispis = 7, 11

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i<n/2; i++){
    if(n%i==0) jeProst = false;
  }

  return jeProst;
}


int main() {

  int n;
  cin>>n;

  for(int i = n; i<=2*n; i++){
    if(jeProst(i)){
      string s = to_string(i);
      reverse(s.begin(), s.end());
      int new_i = stoi(s);
      if(i == new_i){
        cout<<i<<" ";
      }
    }
  }
  
  return 0;
}
