//Program kojim ispisuje sve proste palindromicne brojeve u intervalu od n - n*2 
//Primjer n = 7 ispis = 7, 11


#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i <= n/2; i++){  
    if(n%i==0) jeProst = false;
  }
  return jeProst;

}

bool jePalindrom(string b){
  string p = b;
  bool palindrom = true;

  reverse(p.begin(), p.end());
  if(b != p) palindrom = false;

  return palindrom;
}

int main() {

  int n; 
  cin>>n;

  string b;

  cout<<"Brojevi: "<<endl;
  for(int i = n; i < 2*n; i++){
    if(jeProst(i)){
      b = to_string(i);
      if(jePalindrom(b)){
        cout<<i<<endl;
      }
    }
  }
  
  return 0; 
}
