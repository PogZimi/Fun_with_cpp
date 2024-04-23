/*
WARNING : Include the "cyclicity.h" header file or else this program will not work.
          GO To Funwithcpp to fetch cyclicity.h

Problem Statement : Find the unit digit of (A)^x * (B)^y * (C)^z where A,B,C,x,y and z are non-negative integers.
Example : 
     = (684)^1 x (759)^1 x (413)^1 x (676)^1
     = 4 x 9 x 3 x 6  [ UNIT DIGIT OF EACH NUMBER ]
     = 8
*/

#include "cyclicity.h"

int main(){

    vector<int>numbers;
    int n, element, power, unit_;
    int unit_digit_product=1;
    cout << "INPUT SIZE : " << endl;
    cin >> n;

    // collects the input
    for(int i =0; i < n; i++){
         cout << "["<<i+1<<"] : ";
         cin>>element;
         cout << "(" << element << ")^";
         cin >>power;
         unit_=unit_digit(element, power);
         numbers.push_back(unit_);
    }

  
    for(int i = 0; i < n; i++){
        unit_digit_product = (unit_digit_product * (numbers[i]) ) %10;
        
    }
    cout << unit_digit_product << endl;
    
    return 0;
}
