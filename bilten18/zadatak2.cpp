#include <iostream>
using namespace std;


int main() {

  int n;
  cin>>n;

  int niz[n];

  for(int i = 0; i<n; i++){
    cin>>niz[i];
  }

  for(int i = n-1; i>=0; i--){
    cout<<niz[i]<<" ";
  }

  return 0;
}
