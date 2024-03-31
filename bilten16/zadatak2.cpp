#include <iostream>
#include <string>

using namespace std;

int main() {

  int n;
  cin >> n;

  string c = to_string(n);
  int len = c.length(); // da saznamo da li je broj jednocifren ili vise cifara

  int brojac = 1; // brojac multiplikativnosti broja

  int y;          // cifre jedna puta druge
  int j, d, s, h; // cifre

  if (len == 1) { // jednocifren
    brojac = 1;
  } else if (len == 2) { // dvocifren
    d = (n / 10) % 10;
    j = n % 10;
    y = d * j;
    if (d * j == 0)
      brojac = 1; // 10, 20, 30...itd
    else
      while (d * j != 0) {
        d = (y / 10) % 10;
        if (d == 0)
          break;
        j = y % 10;
        y = d * j;
        brojac++;
      }
  } else if (len == 3) { // trocifren
    s = n / 100;
    d = (n / 10) % 10;
    j = n % 10;
    y = s * d * j;
    cout << "y: " << y << endl;
    if (s * d * j == 0)
      brojac = 1; // broj sadrzi cifru koja iznosi 0
    else
      while (s * d * j != 0 && d != 0) {
        s = y / 100;
        d = (y / 10) % 10;
        j = y % 10;
        if (s == 0 && d != 0) {
          y = d * j;
          brojac++;
        }else if (d == 0) {
          break;
        }else
          y = s * d * j;
        brojac++;
        cout << "s: " << s << endl;
        cout << "d: " << d << endl;
        cout << "j: " << j << endl;
        cout << "y: " << y << endl;
        cout << "br: " << brojac << endl;
      }
  }else if(len == 4){
    h = n/1000;
    s = (n%1000)/100;
    d = (n%100)/10;
    j = n%10;
    y = h*s*d*j;
    cout << "h: " << h << endl;
    cout << "s: " << s << endl;
    cout << "d: " << d << endl;
    cout << "j: " << j << endl;
    cout<<"y: "<<y<<endl;
    if(h*s*d*j == 0) 
      brojac = 1;
    else
      while(y!=0 && d!=0){
        h = y/1000;
        s = (y%1000)/100;
        d = (y%100)/10;
        j = y%10;
        if(h==0 && s!=0){
          y = s*d*j;
        }else if(h == 0 && s==0 && d!=0){
          y = d*j;
        }else if(d==0){
          break;
        }else 
          y = h*s*d*j;
        brojac++;
        cout << "h: " << h << endl;
        cout << "s: " << s << endl;
        cout << "d: " << d << endl;
        cout << "j: " << j << endl;
        cout << "y: " << y << endl;
        cout << "br: " << brojac << endl;
      }
    
    
  }

  cout << "Multiplikativnost: " << brojac;

  return 0;
}
