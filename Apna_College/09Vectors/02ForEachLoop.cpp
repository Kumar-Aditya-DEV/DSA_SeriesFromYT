#include<iostream>
#include<vector>
using namespace std;
int main(){

  // Example 1 ->
vector<int> vec (5, 0);
for(int i : vec){
  cout << i << endl;
}


// Example 2 ->
vector<char> vect = { 'a', 'b', 'c'};
for(char value : vect){
  cout << value << endl;
}

  return 0;
}