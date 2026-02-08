#include<iostream>
using namespace std;
int main(){
    int F;
    cout << "Enter temperature in Fahrenheit : " ;
    cin >> F;

    float C = (F - 32) * 5.0 / 9.0;

    cout << F << "°F = " << C << "°C" << endl;


    return 0;
} 
