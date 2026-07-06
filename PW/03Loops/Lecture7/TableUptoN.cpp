#include <iostream>
using namespace std;
int main(){
  
  int n;
  cout << "Enter the number: ";
  cin >> n;
  for(int i=1; i<=10; i++){
    cout << n*i << " ";     // output -> n 2n 3n 4n 5n 6n 7n 8n 9n 10n
  }
  return 0;
}