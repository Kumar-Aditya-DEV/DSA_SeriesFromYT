#include <iostream>
using namespace std;


// 1 -> Even , 0 -> Odd
bool isEven(int a){

  // odd -> a & 1
  if(a & 1){
    return 0;
  }

    return 1;           //for even
}

int main()
{
    int num;
    cout <<" Enter your no. ";
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even " <<endl;
    }
    else {
        cout<< " Number is Odd " <<endl;
    }


  return 0;
}