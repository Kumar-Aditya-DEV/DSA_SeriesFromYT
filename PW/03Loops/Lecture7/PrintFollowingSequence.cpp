#include <iostream>
using namespace std;
int main(){
  // 1 n 2 n-1 3 n-2 4 n-3 ..... n/2 n/2+1
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=1; i<=n/2; i++){
    cout << i << " " << n-i+1 << " ";     // output -> 1 n 2 n-1 3 n-2 4 n-3 ..... n/2 n/2+1
  }
  return 0;
}