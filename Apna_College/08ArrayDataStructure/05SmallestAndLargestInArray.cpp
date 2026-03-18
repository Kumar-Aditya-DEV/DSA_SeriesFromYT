// ye code mere ko value nikl kr dega smallest ya largest 

#include<iostream>
#include<climits>
using namespace std;

int main(){

  int nums[] = {10, 20, -10, 30, 45, 101};
  int size = 6;

  int largest = INT_MIN;  // sabse chhoti possible value se start

  for(int i=0; i<size; i++){

    // agar current element bada hai to update karo
    // largest = max(nums[i], largest); // inbuilt method

    if(nums[i] > largest){
      largest = nums[i];
    }
  }

  cout << "largest = " << largest << endl;

  return 0;
}






// for largest

#include <iostream>
#include <climits>
using namespace std;

int main()
{    
    int nums[] = { 2, 4, 5, 8, -10, 20};
    int size = 6;
    
    int largest = INT_MIN; // starting me smallest possible value
    int index = -1;        // index store karega
    
    for(int i=0; i<size; i++){
        
        // agar bada element mila
        if(nums[i] > largest){
            largest = nums[i]; // value update
            index = i;         // index update
        }
    }
    
    cout << "Largest = " << largest << endl;
    cout << "Index = " << index << endl;

    return 0;
}










// ye mere ko index ki value dega 


#include <iostream>
#include <climits>
using namespace std;
int main()
{    
    // int nums[] = { 2, 4, 5, 8, -10, 20};
    // int size = 6;
    
    // int smallest = INT_MAX;
    // int index = -1;
    
    // for(int i=0; i<size; i++){
    //     if(nums[i] < smallest){
    //         smallest = nums[i];
              //  index = i;
    //     }
    // }
    
    // cout << "smallest Value at Index  = " << index << endl;
    
    
    



    int nums[] = { 2, 4, 5, 8, -10, 20};
    int size = 6;
    
    int largest = INT_MIN;
    int index = -1;
    
    for(int i=0; i<size; i++){
        if(nums[i] > largest){
            largest = nums[i];
            index = i;
        }
    }
    
    cout << "Largest = " << largest << endl;
    cout << "Index = " << index << endl;
    return 0;
}
