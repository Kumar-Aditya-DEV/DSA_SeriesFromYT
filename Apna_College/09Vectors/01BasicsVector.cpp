#include<iostream>
#include<vector>
using namespace std;
int main(){
// THREE METHODS TO INITIALISE VECTOR

// 1st
vector<int> vec;       //abhi vector ki size zero hai 


// 2nd
vector<int> vec = {1, 2, 3};     
cout << vec[0] << endl;



// 3rd 
vector<int> vec(3, 0);     //first value is size of vector and second value meri index pr kya honi chiea 
cout << vec[0] << endl;
cout << vec[1] << endl;
cout << vec[2] << endl;


  return 0;
}