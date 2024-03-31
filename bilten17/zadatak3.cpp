#include <iostream>
#include <vector>
using namespace std;
/* Rijesiti diofantovu jednacinu oblika ax+by = c za promjenjive x i y u intervalu x=(9...20) i y(9...20). Programom unijeti parametre a b i c te odrediti i ispisati cjelobrojna rjesenja x i y u pomenutom intervalu. */
// Primjer: a = 35 b = 45 c = 1000 rjesenja su x = 17 i y = 9

#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  cin>>a>>b>>c;

  int d = 0;

  for(int x = 9; x<=20; x++){
    for(int y = 9; y<=20; y++){
      d = a*x + b*y;
      if(d == c) cout<<x<<" "<<y;
    }
  }

    return 0;
}
