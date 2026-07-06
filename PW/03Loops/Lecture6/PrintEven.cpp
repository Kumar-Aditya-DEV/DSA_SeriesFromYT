#include <iostream>
using namespace std;
int main(){
  // i = 1 2 3 4 5 ..... 100
  // 100 times loop chal raha hai 100 iteration
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for (int i = 0; i <= n; i++){
    if (i % 2 == 0){
      cout << i << " ";
    }
  }


// 50 iterations
  for(int i=2; i<=100; i+=2){
    cout << i << " ";       // output -> 2 4 6 8 10 12 14 16 ..... 100
  }


  for(int i=0; i<=50; i++){
    cout << i*2 << " ";     // output -> 0 2 4 6 8 10 12 14 ..... 100
  }
  return 0;
}