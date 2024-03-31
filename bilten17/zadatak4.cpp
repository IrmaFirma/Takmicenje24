#include <iostream>
using namespace std;
/* napisati program za izracunavanje faktorijela prirodnog broja n pri cemu je 1<=n<=100 */
// Primjer: za ulaz 6 ispis treba biti 720 
#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;

  int fact = 1;

  if(n==1){
    fact = 1;
    cout<<fact;
  }else{
    for(int i = 2; i<=n; i++){
      fact = fact*i; 
    }
    cout<<fact;
  }


    return 0;
}
