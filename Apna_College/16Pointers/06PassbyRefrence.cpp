#include <iostream>
using namespace std;

// ---------------- PASS BY VALUE ----------------
// yahan function me variable ki copy jaati hai
// original value change nahi hoti

// void changeA(int a){    
//   a = 20;   // sirf copy change hui
// }

// int main(){
//     int a = 10;

//     changeA(a);   // copy pass hui

//     cout << "inside main funcn : " << a << endl;  
//     // output: 10 (original unchanged)

//   return 0;
// }



// ---------------- PASS BY REFERENCE (POINTER) ----------------
// yahan address pass hota hai
// original value change hoti hai

// void changeA(int* ptr){    
//   *ptr = 20;   // original value change
// }

// int main(){
//     int a = 10;

//     changeA(&a);   // address pass kiya

//     cout << "inside main funcn : " << a << endl;  
//     // output: 20

//   return 0;
// }



// ---------------- PASS BY REFERENCE (ALIAS / &) ----------------
// yahan reference (alias) use hota hai
// ptr aur a same variable ko refer karte hain

void changeA(int &ptr){   
  ptr = 20;   // directly original variable change
}

int main(){
    int a = 10;

    changeA(a);   // direct pass (no & needed)

    cout << "inside main funcn : " << a << endl;  
    // output: 20

  return 0;
}



// ---------------- IMPORTANT NOTES ----------------

// pass by value → copy jaati hai → original change nahi hota ❌
// pass by pointer → address jaata hai → original change hota hai ✅
// pass by reference (&) → alias banta hai → original change hota hai ✅

// shortcut:
// value → copy
// pointer → address
// reference → same variable ka dusra naam