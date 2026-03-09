#include<iostream>
using namespace std;
int main(){
   int n = 4;

   for(int i=1; i<=n; i++){   //outer
    char ch = 'A';
    for(int j=1; j<=n; j++){   //inner start => line start 
      cout << ch << " ";
      ch = ch + 1;
    }
    cout << endl; 
   }
  return 0;
}