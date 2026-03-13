#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n = 5;
  int arr[5] = {1,2,3,4,5};

  for(int st=0; st<n; st++){     // iss se array start ho raha hai 
    for(int end=st; end<n; end++){    // ye end ke liyea hai but ye start se end tk jaiega
      for(int i=st; i<=end; i++){   // ye print karane ke liyea hai
      cout << arr[i];
    }
    cout << " "; 
  }
  cout << endl;
}
  return 0;
}