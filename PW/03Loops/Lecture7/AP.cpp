#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=2; i<=3*n-1; i+=3){
    cout << i << " ";     // output -> 2 5 8 11 14 ..... 3n-1
  }

  for(int i=0; i<n; i++){
    cout << 3*i-2 << " ";     // output -> 2 5 8 11 14 ..... 3n-1
  }


  int a = 2;
  for(int i=1; i<=n; i++){
    cout << a << " ";     // output -> 2 5 8 11 14 ..... 3n-1
    a += 3;
  }




  // 3 7 11 15 19 ..... 4n-1
  int a=3, d = 4;
  for(int i=1; i<=n; i++){
    cout << a << " ";     // output -> 3 7 11 15 19 ..... 4n-1
    a += d;
  }
  return 0;
}