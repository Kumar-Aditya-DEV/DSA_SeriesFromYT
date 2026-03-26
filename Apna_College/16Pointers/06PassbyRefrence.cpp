#include <iostream>
#include <vector>
using namespace std;

// void changeA(int a){    // pass by value
//   a = 20;
// }

// int main(){
//     int a = 10;

//     changeA(a);

//     cout << "inside main funcn : " << a << endl;  // 10 aaiega
//   return 0;
// }





// void changeA(int* ptr){    // pass by refrence ke liyea adress pas karo and pass by refrence using 
//   *ptr = 20;
// }

// int main(){
//     int a = 10;

//     changeA(&a);

//     cout << "inside main funcn : " << a << endl;  // 20 aaiega
//   return 0;
// }




void changeA(int &ptr){   // pass by refrence using alias(&) instead of pointers
  ptr = 20;
}

int main(){
    int a = 10;

    changeA(a);

    cout << "inside main funcn : " << a << endl;  // 20 aaiega
  return 0;
}


// pass by refrence me hame apne main function ka address pass kr sakta hu dusre function me uss se ye hoga ki mai koi copy nii bhej raha hu

// in c++ pass by refrence 2 type se hota hai. 1 - pointers se. 2 - refrences(alias se )