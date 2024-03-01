#include <iostream>
using namespace std;


int main() {

  int a, b;
  cin>>a>>b;

  int max = a, min = b;

  if(a>b){
    max = a;
    min = b;
    cout<<"Max: "<<max<<" Min: "<<min<<endl;
  }else if(b>a){
    max = b;
    min = a;
    cout<<"Max: "<<max<<" Min: "<<min<<endl;
  }else{
    cout<<"Brojevi su jednaki";
  }


  return 0;
}
