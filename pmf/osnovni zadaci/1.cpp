#include <iostream>
#include <string>
using namespace std;
/*Napisati program koji od korisnika traži unos dva cijela broja a i b, te
  ispisuje sumu, razliku, proizvod i koliˇcnik unesenih brojeva. Šta se
  dešava u sluˇcaju da a nije djeljivo sa b?*/


int main() {

  int a, b;
  cin>>a>>b;

  cout<<a+b<<endl;
  cout<<a-b<<endl;
  cout<<a*b<<endl;
  cout<<a/b<<endl;

  return 0;
}
