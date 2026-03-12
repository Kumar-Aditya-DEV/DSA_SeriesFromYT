// ye code mere ko value nikl kr dega smallest ya largest 

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//   // int nums[] = {10, 20, -10, 30, 45, 101};
//   // int size = 6;

//   // int smallest = INT_MAX;

//   // for(int i=0; i<size; i++){

//       //  normal method
//   //   if(nums[i] < smallest){
//   //     smallest = nums[i];
//   //   }

//         // inbuilt method direct
//         // smallest = min(nums[i], smallest);
//   // }

//   // cout << "smallest = " << smallest << endl;



//   int nums[] = {10, 20, -10, 30, 45, 101};
//   int size = 6;

//   int largest = INT_MIN;
  
//   for(int i=0; i<size; i++){
//     // if(nums[i] > largest){
//     //   largest = nums[i];
//     // }


//     // inbuilt direct
//     largest = max(nums[i], largest);
//   }

//   cout << "largest  = "   << largest << endl;
//   return 0;
// } 









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
