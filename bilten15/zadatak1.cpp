#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main() {

  int n;
  cin>>n;

  string s = to_string(n);

  reverse(s.begin(), s.end());

  cout<<s;
  return 0;
}

