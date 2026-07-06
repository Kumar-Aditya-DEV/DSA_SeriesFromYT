#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=n; i>=1; i--){
    cout << i << " ";
  }

  for(int i=1; i<=n; i++){
    cout << n-i+1 << " ";
  }
  return 0;
}