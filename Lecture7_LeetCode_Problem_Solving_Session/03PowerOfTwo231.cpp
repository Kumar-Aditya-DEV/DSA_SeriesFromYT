// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter Your number: ";
//     cin >> n;

//     for(int i = 0;i <= 30 ; i++){
//       int ans = pow(2,i);
//       if(ans == n){
//         return true;
//       }
//     }
//     return false;
//     return 0;
// }






#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter Your number: ";
    cin >> n;

    int ans = 1;

    for(int i = 0; i <= 30; i++){
        if(ans == n){
            cout << "True";
            return 0;
        }

        if(ans < INT_MAX / 2){
            ans = ans * 2;
        }
    }

    cout << "False";
    return 0;
}
