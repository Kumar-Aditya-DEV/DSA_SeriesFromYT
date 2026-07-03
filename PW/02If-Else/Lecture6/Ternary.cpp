#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  (n%2 == 0) ? cout << "Even" : cout << "Odd"; // Ternary operator

  cout << ((n%2 == 0) ? "Even" : "Odd"); // Ternary operator
  return 0;
}