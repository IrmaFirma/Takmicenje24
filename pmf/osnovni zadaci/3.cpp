#include <iostream>
#include <cmath>
using namespace std;
/*Napisati program koji od korisnika traži unos koordinata za dvije
taˇcke u realnoj ravni. Program raˇcuna i ispisuje udaljenost taˇcaka.*/

int main() {

  int x1, x2, y1, y2;
  cin>>x1>>x2>>y1>>y2;

  cout<<sqrt(pow(2, x2-x1) + pow(2, y2-y1));

  return 0;
}
