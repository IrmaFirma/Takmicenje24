#include <iostream>
#include <string>
using namespace std;
//NZD


int main() {

  int x, y;
  cin>>x>>y;
  int nzd = 0;

  for(int i = 1; i<=y; i++){
    if(x%i==0 && y%i==0){
      nzd = i;
    }
  }

  cout<<nzd<<endl;

  return 0;
}
