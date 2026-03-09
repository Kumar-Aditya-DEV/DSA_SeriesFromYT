#include <iostream>
using namespace std;

int main()
{
  int n = 4;

  // top hollow pyramid
  for (int i = 0; i < n; i++)
  {

    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    cout << "*";

    if (i != 0)
    {
      // inner spaces
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }

      cout << "*";
    }

    cout << endl;
  }

  // bottom hollow pyramid
  for (int i = n - 2; i >= 0; i--)
  {

    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    cout << "*";

    if (i != 0)
    {
      // inner spaces
      for (int j = 0; j < 2 * i - 1; j++)
      {
        cout << " ";
      }

      cout << "*";
    }

    cout << endl;
  }

  return 0;
}