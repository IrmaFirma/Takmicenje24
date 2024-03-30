#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main() {

  double a, b, c;
  cin>>a>>b>>c; //unesene stranice

  double o, pov, alfa, beta, gama; //obim povrsina i najmanji ugao
  
  alfa = acos((pow(b, 2) + pow(c, 2) - pow(a, 2))/(2*b*c)) * 180 / 3.141592;
  beta = acos((pow(a, 2) + pow(c, 2) - pow(b, 2))/(2*a*c)) * 180 / 3.141592;
  gama = acos((pow(a, 2) + pow(b, 2) - pow(b, 2))/(2*a*b))* 180 / 3.141592;

  double stepen, min, sek; //pretvoren ugao u stepene, min i sek

  //suma bilo koje dvije str mora biti veca od trece str ako je tr
  if((a+b>c) && (a+c>b) && (b+c>a)){
    o = a + b + c;
    cout<<"Obim: "<<o<<endl;
    
    double s = (a+b+c)/2;
    pov = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Povrsina: "<<pov<<endl;
    
    if((alfa < beta) && (alfa < gama)){
      cout<<"Najmanji ugao: ";
      double cijeli_dio_stepen = 0.0;
      double dec_dio_stepen = modf(alfa, &cijeli_dio_stepen);
      stepen = cijeli_dio_stepen;
      min = dec_dio_stepen * 60;
      double cijeli_dio_minuta = 0.0;
      double dec_dio_minuta = modf(min, &cijeli_dio_minuta);
      sek = dec_dio_minuta * 60;
      double cijeli_dio_sek = 0.0;
      double dec_dio_sek = modf(sek, &cijeli_dio_sek);

      //ispis
      cout<<stepen<<" stepeni "<<cijeli_dio_minuta<<" minuta "<<cijeli_dio_sek<<" sekundi."; 
    }
    if((beta < alfa) && (beta < gama)){
      cout<<"Najmanji ugao: ";
      double cijeli_dio_stepen = 0.0;
      double dec_dio_stepen = modf(beta, &cijeli_dio_stepen);
      stepen = cijeli_dio_stepen;
      min = dec_dio_stepen * 60;
      double cijeli_dio_minuta = 0.0;
      double dec_dio_minuta = modf(min, &cijeli_dio_minuta);
      sek = dec_dio_minuta * 60;
      double cijeli_dio_sek = 0.0;
      double dec_dio_sek = modf(sek, &cijeli_dio_sek);

      //ispis
      cout<<stepen<<" stepeni "<<cijeli_dio_minuta<<" minuta "<<cijeli_dio_sek<<" sekundi."; 
    }
    if((gama < alfa) && (gama < beta)){
      cout<<"Najmanji ugao: ";
      double cijeli_dio_stepen = 0.0;
      double dec_dio_stepen = modf(gama, &cijeli_dio_stepen);
      stepen = cijeli_dio_stepen;
      min = dec_dio_stepen * 60;
      double cijeli_dio_minuta = 0.0;
      double dec_dio_minuta = modf(min, &cijeli_dio_minuta);
      sek = dec_dio_minuta * 60;
      double cijeli_dio_sek = 0.0;
      double dec_dio_sek = modf(sek, &cijeli_dio_sek);

      //ispis
      cout<<stepen<<" stepeni "<<cijeli_dio_minuta<<" minuta "<<cijeli_dio_sek<<" sekundi."; 
    } 
  }else{
    cout<<"Ne postoji.";
  }

    return 0;
}
