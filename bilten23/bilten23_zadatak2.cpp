#include <iostream>
using namespace std;
// Napisati program koji sa tastature ucitava cijele brojeve sve dok se ne unese broj 0 ili dok zbir brojeva ne predje 100. Program na kraju treba da ispise zbir unesenih brojeva. 
// Test primjer: 3 48 -15 2 0 --> Zbir unesenih brojeva: 38


int main() {

  int sum = 0;
  int i;

  cout << "Unesi cijeli broj (0 za kraj): ";
  cin >> i;
  sum += i;
  while (i != 0 && sum<=100){
    cout << "Unesi cijeli broj (0 za kraj): ";
    cin >> i;
    if(i==0) break;
    sum += i;
    if(sum > 100) break;
    i++;
  }

  cout << "Zbir unesenih brojeva: " << sum;

  return 0;

}
