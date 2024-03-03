#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int d[] = {1, 2, 5, 10, 20, 50, 100, 200};
int n = sizeof(d) / sizeof(d[0]);


void minBroj(int k){
  sort(d, d+n);
  vector<int> res;

  for(int i = n-1; i>=0; i--){
    while(k >= d[i]){
      k -= d[i];
      res.push_back(d[i]);
    }
  }

  cout<<"Kusur: "<<endl;
  for(int i = 0; i<res.size(); i++){
    cout << res[i] << " ";
  }
}


int main() {

  int cijena, iznos;
  cin>>cijena>>iznos;
  int n = iznos - cijena;

  minBroj(n);

  return 0;
}
