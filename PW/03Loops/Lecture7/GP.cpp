#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int a = 1, r = 2;
  for(int i=1; i<=n; i++){
    cout << a << " ";     // output -> 1 2 4 8 16 ..... 2^(n-1)
    a *= r;
  }
  return 0;
} 