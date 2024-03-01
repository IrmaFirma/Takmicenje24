#include <iostream>
using namespace std;


int main() {

  double va, vb, vm, d;
  cin>>va>>vb>>vm>>d;

  double prvi = va+vb;
  double drugi = vm/prvi;
  double s = drugi * d;
  cout<<s<<" km";

  return 0;
}
