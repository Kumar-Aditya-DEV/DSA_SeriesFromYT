#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "enter age : ";
  cin >> number;

  if (number % 2 == 0)
  {
    cout << "Number is Even\n";
  }
  else
  {
    cout << "Number is Odd\n";
  }
  return 0;
}