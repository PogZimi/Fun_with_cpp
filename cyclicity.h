/* 
   Derived from "FIND_THE_UNIT_DIGIT.cpp
   Check Fun_with_cpp directory to access it! 
*/

#ifndef CYCLICITY_H
#define CYCLICITY_H
#include<cmath>
#include<vector>
#include<iostream>
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
        unit_num=num;
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

#endif
