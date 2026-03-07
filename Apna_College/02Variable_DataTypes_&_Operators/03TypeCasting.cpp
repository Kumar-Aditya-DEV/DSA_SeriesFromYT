#include<iostream>
using namespace std;
int main(){
  // implicit conversion -> compiler automatic convert value
  char grade = 'A';

  int value = grade;
  cout << value << endl;


  // type casting -> explicit convert 
  double price = 100.99;

  int newPrice = (int)price;
  cout << newPrice << endl;
  return 0; 
}