#include <iostream>
using namespace std;

void printCounting(int n){
  for(int i = 1;i <= n; i++){
    cout << i << " ";
  }
}


int main()
{
    int n;
    cout <<" Enter your number : ";
    cin >> n;

    cout << " Answer is ";
    printCounting(n);

  return 0;
}