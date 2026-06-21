#include<iostream>
using namespace std;
int main(){
  char x = 'A';
  cout << (int)x;

  int a = 97;
  cout << (char)a;

  char ch1 = 'A';
  char ch2 = 'a';
  cout << ch1 + ch2 << endl;

  cout << 'a' + 1;  // 98
  cout << (char)('a' + 1);
}