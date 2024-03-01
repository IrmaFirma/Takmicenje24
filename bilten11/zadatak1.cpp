#include <iostream>
using namespace std;


int main() {

  int j, d, t;
  cin>>j>>d>>t;

  int max = j;
  int min = d;
  int brx = 0;
  int brm = 0;

  if((j>d) && (j>t)){
    max = j;
  }else if((t>d) && (t>j)){
    max = t;
  }else if((d>j) && (d>t)){
    max = d;
  }

  cout<<"Maksimalni clan je: "<<max<<endl;

  if((j<d) && (j<t)){
    min = j;
  }else if((t<d) && (t<j)){
    min = t;
  }else if((d<j) && (d<t)){
    min = d;
  }

  cout<<"Minimalni clan je: "<<min<<endl;


  if((max==j) && (j==d) && (j==t)){
    brx = 3;
  }else if((max == j) && (j==d) || (j==t)){
    brx = 2;
  }else if((max==d) && (d==j) && (d==t)){
    brx = 3;
  }else if((max == d) && (d==j) || (d==t)){
    brx = 2;
  }else if((max==t) && (t==j) && (t==d)){
    brx = 3;
  }else if((max == t) && (t==d) || (t==j)){
    brx = 2;
  }else{
    brx = 1;
  }

  cout<<"Broj maksimalnih clanova je: "<<brx<<endl;
  
  if((min==j) && (j==d) && (j==t)){
    brm = 3;
  }else if((min == j) && (j==d) || (j==t)){
    brm = 2;
  }else if((min==d) && (d==j) && (d==t)){
    brm = 3;
  }else if((min == d) && (d==j) || (d==t)){
    brm = 2;
  }else if((min==t) && (t==j) && (t==d)){
    brm = 3;
  }else if((min == t) && (t==d) || (t==j)){
    brm = 2;
  }else{
    brm = 1;
  }
  
  cout<<"Broj minimalnih clanova je: "<<brm<<endl;
  
  return 0;
}
