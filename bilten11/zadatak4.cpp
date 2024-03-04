#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//funkcija za provjeru da li je broj prost
bool jeProst(int n){
  bool jeProst = true;
  for(int i = 2; i<=n/2; i++){
    if(n%i==0) jeProst = false;
  }
  return jeProst;
}

int main() {

  //unos gornje granice intervala
  int n;
  cin>>n;

  int holder = 0, max_dif = 0;

  for(int i = 2; i<n; i++){
    if(jeProst(i)){
      if(max_dif<holder){
        max_dif = holder;
      }
      holder = 1;
    }else{
      holder++;
    }
  }

  cout<<max_dif<<endl;

  return 0;
}
