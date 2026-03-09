#include<iostream>
using namespace std;

// min of two
int minOfTwo(int a, int b){ // parameter
  if(a < b){
    return a;
  }
  else{
    return b;
  }
}

int main() {
  cout << "min = "  <<minOfTwo(10, 5) << endl;    // arguments

  return 0;
}