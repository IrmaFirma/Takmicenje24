#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin>>n;

  string c = to_string(n);
  int len = c.length(); //da saznamo da li je broj jednocifren ili vise cifara

  int brojac = 1; //brojac multiplikativnosti broja

  int y; //cifre jedna puta druge
  int j, d, s, h; //cifre

  if(len == 1){ //jednocifren
    brojac = 1;
  }else if(len == 2){ //dvocifren
    d = (n/10)%10;
    j = n%10;
    y = d*j;
    if(y!=0 or d!=0){
      while(y!=0 or d!=0){
        d = (y/10)%10;
        j = y%10;
        y = d*j;
        brojac++;
        cout<<"slj: "<<brojac<<endl;
        cout<<"y: "<<y<<endl;
        cout<<"d: "<<d<<endl;
        if(d==0 or y == 0) break;
      }
    }else brojac = 1;
  }

  cout<<"Multiplikativnost: "<<brojac;

  return 0;
}
