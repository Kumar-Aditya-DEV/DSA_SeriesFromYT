#include<iostream>
#include<vector>
using namespace std;
int main(){

  //  dynamic allocation means jo run time pr apni size ko change kare  ye heap me hoti hai  size is resize 

  //  static compile time pr hoti hai ye stack ke andar hoti hai size is fixed  

  vector<int> vec;

  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);

  cout << vec.size() << endl;          // 3 hai size 
  cout << vec.capacity() << endl;     // 4 hai capacity


// ex 2

  vector<int> vect;

  vect.push_back(0);
  vect.push_back(1);
  vect.push_back(2);
  vect.push_back(3);
  vect.push_back(4);

  cout << vect.size() << endl;          // 5 hai size 
  cout << vect.capacity() << endl;     // 8 hai capacity
  return 0;
}