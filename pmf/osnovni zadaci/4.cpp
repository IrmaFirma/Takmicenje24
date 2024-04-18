#include <iostream>
#include <cmath>
using namespace std;
/*Napisati program koji od korisnika traži unos prirodnog broja n i
znaka z, te program ispisuje kvadrat saˇcinjen od znakova z. Za n=5 i z
= ’!’*/


int main() {

  int n;
  cin>>n;

  char z;
  cin>>z;
  
  for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
      cout<<z;
    }
    cout<<"\n";
  }


  return 0;
}
