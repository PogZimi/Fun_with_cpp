/* 
Problem Statement : 
 Suppose X is a positive number of n digits [ (n>=1) . Then find the unit digit of X^y without actually calculating X^y? 
Mathematical Concept : 
 This type of problem includes the concept of Cyclicity.
Example : 
    25662^84239 - Find the Unit digit.

    (UNIT_DIGIT_OF_BASE)^(LAST 2 digits of the power)
=    2^39
    We know that cyclcity of the base [2] is 4.
     39 % 4 --> remainder left is 3.
=    2^3
=    8 (if it were to be 16, then we will include only 6).

Note : The program doesn't actually performs the X^y operation.It is just using the concept of cylicity.
*/

#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

vector<int>powers={2,3,7,8,4,9};
vector<vector<int>>cyclicity_pattern={{2,4,8,6}, {3,9,7,1}, {7,9,3,1}, {8,4,2,6}, {4,6}, {9,1}};

int cyclicity(int x){
    int cy;
    if(x==2 || x==3 || x == 7 || x==8){
           cy=4;
    }
    else if(x==4 || x==9){
           cy=2;
    }
    return 2;
}

int unit_digit(int num, int pow_){
    int number=num%10;
    int power=pow_%100;
    
    int unit_num=0,index=0,cyclicity_,new_pow;

    if(pow_==0){
        unit_num=1;
        goto end;
    }
    else if(pow_==1){
        unit_num=number;
        goto end;
    }
    if(number==0 || number==1 || number==5 || number==6){
         unit_num=number;
    }
    
    else{
         for(int i =0; i < powers.size(); i++){
               if(number==powers[i]){
                     index=i;
                     cyclicity_=cyclicity(number);
                     break;
               }
         }
    new_pow = power%cyclicity_;   
    if(new_pow==0){
        new_pow=cyclicity_pattern[index][cyclicity_pattern[index].size()-1];
    }

    unit_num = pow(number, new_pow);
    unit_num = unit_num%10;
  }

   end:
   return unit_num;
}

int main(){

    int num;
    int power;
    int result;
    cout << "Enter the number : "; 
    cin >> num;
    cout << "( " << num << " )^";
    cin>>power;

    
    result = unit_digit(num, power);
    cout << "UNIT DIGIT is : " << result << endl;
    return 0;
}
