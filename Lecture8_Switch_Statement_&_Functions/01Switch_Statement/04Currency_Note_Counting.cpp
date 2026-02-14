#include <iostream>
using namespace std;

int main() {
  int amount;
  cout << "Enter amount : ";
  cin >> amount;

  int note;
  while (amount > 0){
    if(amount >= 100)  note = 100;
    else if(amount >= 50) note = 50;
    else if(amount >= 20) note = 20;
    else note = 10;


    switch(note){
      case 100: cout <<  "100 Rs notes : " << amount / 100 << endl;
      amount = amount % 100;
      break;

      case 50: cout <<  "50 Rs notes : " << amount / 50 << endl;
      amount = amount % 50;
      break;

      case 20: cout <<  "20 Rs notes : " << amount / 20 << endl;
      amount = amount % 20;
      break;

      case 10: cout <<  "10 Rs notes : " << amount / 10 << endl;
      amount = amount % 10;
      break;
    }
  }
  
  return 0;
}