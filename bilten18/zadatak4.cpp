#include <iostream>
using namespace std;


int main() {

  int n, a, b, c;
  cin>>n>>a>>b>>c;

  int sum = 0;

  for(int i = 1; i<=n; i++){
    if(((i%a==0) or (i%b==0)) and (i%c!=0)){
      sum+=i;
    }
  }

  cout<<sum;

  return 0;
}
