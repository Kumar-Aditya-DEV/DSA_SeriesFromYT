#include<iostream>
using namespace std;
int main(){

  cout << "Enter Radius : ";
  float r;
  cin >> r;
  float area = 1.33 * 3.14 * r * r * r;
  cout << "Volume of sphere is : ";
  cout << area << endl;
}