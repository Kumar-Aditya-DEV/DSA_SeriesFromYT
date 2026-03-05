#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter your no.";
    // cin >> n;
    // cout << "The value of n is: " << n << endl;

    // if (n > 0){
    //     cout<<"A is positive" << endl;
    // }
    // else{
    //     cout<<"A is negative" << endl;
    // }
    



    // int a,b;
    // cout << "Enter your no.";
    // cin >> a >> b;
    // cout << "The value of A and B is " << a << " " << b << endl;



    // cin.get()   --------->>>>>>>>>   or int me hai to    
// 🎯 Short Summary

// cin.get() → single character read kare
// Space bhi read kare
// Line input ke liye use ho sakta hai
// cin >> se different hai

    // int a;
    // cout << "Enter your no.";
    // a = cin.get();      
    // cout << "Value of a is " << a << endl;


    // int a,b;
    // cout << "Enter the value of a : " ;
    // cin >> a;
    // cout << "Enter the value of b : ";
    // cin >> b;
    
    // if(a > b){
    //     cout << "A is greater" << endl;
    // }
    // else if (a < b){
    //     cout << "B is greater" << endl;
    // }
    // else{
    //     cout << "Both have equal value" << endl;
    // }
    

    char a;
    cout << "Enter the value of a : " ;
    cin >> a;

    if(a >= 'a' && a <= 'z'){
        cout << "This is small letter" << endl;
    }
    else if (a >= 'A' && a <= 'Z'){
        cout << "This is capital letter" << endl;
    }
    else if (a >= '0' && a <= '9'){
        cout << "This is no. form 0 to 9" << endl;
    }
    else{
        cout << "YOU will write something else that can,t setisfy the condition";
    }

    return 0;
}