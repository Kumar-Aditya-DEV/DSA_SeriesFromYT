#include <iostream>
using namespace std;

// 1 -> prime no.
// 0 -> Not prime no.


bool isPrime(int n){

  for(int i = 2;i <= n - 1; i++){
    // divide ho gaya hai , not a prime no.
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}


int main()
{
    int n;
    cout <<" Enter your number : ";
    cin >> n;

    if(isPrime(n)){
      cout << " is a prime number " << endl;
    }
    else{
      cout << "Not a prime number" << endl;
    }

  return 0;
}