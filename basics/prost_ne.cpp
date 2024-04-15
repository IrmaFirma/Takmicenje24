#include <iostream>
#include <string>
using namespace std;
//prost ili ne

bool jeProst(int n){
  bool jeProst = true;

  for(int i = 2; i<=n/2; i++){
    if(n%i==0) jeProst = false;
  }

  return jeProst;
}

int main() {

  int n;
  cin>>n;

  if(n==1){
    cout<<"ni DA ni NE";
  }else if(jeProst(n)){
    cout<<"DA";
  }else if(!jeProst(n)){
    cout<<"NE";
  }

  return 0;
}
