#include<iostream>
using namespace std;
int main(){
  int a = 5;
  int b = 10;

  cout << "Sum = " <<(a + b) << endl;
  cout << "Difference = " <<(a - b) << endl;
  cout << "Product = " <<(a * b) << endl;
  cout << "Division = " <<(a / b) << endl;
  cout << "Modulo = " <<(a % b) << endl;


  int c = 5;
  float d = 10;

  cout << ((double)a / d) << endl;

  cout << (5 / (double)2) << endl;

  // Relationla

  cout << (3 < 5) << endl;  // true -> 1
  cout << (3 > 5) << endl;  // false -> 0
  cout << (3 <= 5) << endl;  // true -> 1
  cout << (3 >= 5) << endl;  // false -> 0
  cout << (3 == 5) << endl;  // false -> 0
  cout << (3 != 5) << endl;  // true -> 1


  // Logical 
  cout << !(3 > 1) << endl;    // false
  cout << !(3 < 1) << endl;    // true


  cout << ( (3 < 1) || (3 > 1) ) << endl;


  cout << ( (3 > 1) || (3 > 2) ) << endl;

  return 0; 
}