#include <iostream>
using namespace std;
int main() {
  // int x = 0;         // yaha pr 0 hai to else wala print hoga or agar 0 ke alawa koi bhi number hoga to if wala print hoga chahe wo negative ho ya positive 
  // if(x) cout << "Aditya";
  // else cout << "Nitin ";


  int a = 4;
  if(a = 4) cout << "Jitendra"; 
  else cout << "Aditya";


  if('w') cout << "Dhristi";
  else cout << "Rishu";


  int x = 4;
  if(x++) cout << x;
  else cout << "Nitin"; 


  int x=4, y=6;
  if(x++ || y++) cout << x << " " << y;
  else cout << "Nitin";

  int x = 0;
  if(x++) cout << "Aditya";
  else cout << "Nitin";          //output: Nitin because x is 0 so it will go to else part and print Nitin

  

  return 0;
}