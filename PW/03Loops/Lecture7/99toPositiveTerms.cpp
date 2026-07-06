#include <iostream>
using namespace std;
int main(){
  // 99 95 91 87 ..... 3 1
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int a = 99, d = -4;
  for(int i=1; i<=n; i++){
    cout << a << " ";     // output -> 99 95 91 87 ..... 3 1
    a += d;
  }
  return 0;
}