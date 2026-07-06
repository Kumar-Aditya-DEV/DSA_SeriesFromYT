#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=19; i<=n; i+=19){
    cout << i << " ";       // output -> 19 38 57 76 ..... n
  }

  for(int i=1; i<=n; i++){
    cout << 19*i << " ";     // output -> 19 38 57 76 ..... n
  }

  for(int i=19; i<=n; i++){
    if(i%19==0){
      cout << i << " ";       // output -> 19 38 57 76 ..... n
    }
  }


  // 10 times loop chal raha hai
  for(int i=1; i<=100; i++){
    cout << 19*i << " ";     // output -> 19 38 57 76 ..... n
  }
  return 0;
}