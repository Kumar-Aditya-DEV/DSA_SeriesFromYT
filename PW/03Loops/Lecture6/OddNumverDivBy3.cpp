#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 1; i <= n; i += 2){
    if (i % 3 == 0){
      cout << i << " ";
    }
  }

  for(int i = 3; i <= n; i += 6){
    cout << i << " ";       // output -> 3 9 15 21 ..... n
  }
  return 0;
}