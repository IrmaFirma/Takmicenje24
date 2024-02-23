// Program koji ispisuje redni broj dana u godini na osnovu unesenog datuma u formi dan, mjesec i godina
//Primjer dan = 25 mjesec = 3 i godina = 2012 ispis je 85


#include <iostream>
using namespace std;

int main() {
  int dan, mjesec, godina;
  cin>>dan>>mjesec>>godina;
  bool prestupna = true;
  int redni = 0;

  if((godina % 400 == 0) || ((godina % 4 == 0) && (godina % 100 != 0))) {
    prestupna = true;
  }else prestupna = false;

  if(mjesec == 1){
    if(dan <= 31) {
      redni = dan;
    }
  }else if(mjesec == 2){
      redni = 31 + dan;
  }else if(mjesec == 3){
    if(prestupna){
      redni = 60 + dan;
    }else{
      redni = 59 + dan;
    }
  }else if(mjesec == 4){
    if(prestupna){
      redni = 91 + dan;
    }else{
      redni = 90 + dan;
    }
  }else if(mjesec == 5){
    if(prestupna){
      redni = 121 + dan;
    }else{
      redni = 120 + dan;
    }
  }else if(mjesec == 6){
    if(prestupna){
      redni = 152 + dan;
    }else{
      redni = 151 + dan;
    }
  }else if(mjesec == 7){
    if(prestupna){
      redni = 182 + dan;
    }else{
      redni = 181 + dan;
    }
  }else if(mjesec == 8){
    if(prestupna){
      redni = 213 + dan;
    }else{
      redni = 212 + dan;
    }
  }else if(mjesec == 9){
    if(prestupna){
      redni = 244 + dan;
    }else{
      redni = 243 + dan;
    }
  }else if(mjesec == 10){
    if(prestupna){
      redni = 274 + dan;
    }else{
      redni = 273 + dan;
    }
  }else if (mjesec == 11){
    if(prestupna){
      redni = 305 + dan;
    }else{
      redni = 304 + dan;
    }
  }else if(mjesec == 12){
    if(prestupna){
      redni = 335 + dan;
    }else{
      redni = 334 + dan;
    }
  }

  cout<<redni;
  return 0; 
}
