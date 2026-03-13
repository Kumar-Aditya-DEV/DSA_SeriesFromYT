#include<iostream>
#include<vector>
using namespace std;
int main(){
  // SIZE 
  vector<char> vec = {'a', 'b', 'c'};
  cout << "size = " << vec.size() << endl;

// PUSH_BACK
  vector<int> vect;
  cout << "size = " << vect.size() << endl;
  vect.push_back(25);
  cout << "size = " << vect.size() << endl;

  for(int valu : vect){
    cout << valu << endl;
  }


// POP_BACK
  vector<int> vecto;
  vecto.push_back(55);
  vecto.push_back(555);
  cout << "size = " << vecto.size() << endl;
  vecto.pop_back();    // remove 555   
  cout << "size = " << vecto.size() << endl;

  for(int valu : vecto){
    cout << valu << endl;
  }



// FRONT
cout << vec.front();    // a

// BACK
cout << vec.back();    // C



// AT
cout << vec.at(0);      // gives value at index 0 -> a

  return 0;
}