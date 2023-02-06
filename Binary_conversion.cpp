#include<iostream>
#include<vector>
using namespace std;

/*
Note : 
[]

Calculators would have a different answer for the binary conversion
Although their answers are right, but they added extra digits to complete the pairs of 4 digits

If you want to verify the binary conversion : 
 Copy paste the binary conversion of your input ( from this program ) & paste it into calculator 
 It will give the correct answer in decimal value ( input value ).

*/

void k_start(){

    int number, counter=0, quotient=0;
    vector<int>quotient_list;
 
    cout << "Enter the 10's compliment number : " << endl;
    cin >> number;
    
    // Feeding data to the program
    quotient = number;
    for(int i = 0; quotient != 1; i++){
         quotient_list.push_back(quotient);
         // cout << remainder << " , ";
         quotient = quotient/2;
         
    }

    // Conversion 
    for(int i = 0; i <  quotient_list.size(); i++){
           if(quotient_list[i] % 2 == 0){
                quotient_list[i] = 0;
           }
           else{
                quotient_list[i] = 1;
           }
    }
    
    cout << "2's compliment for ( " << number << " ) is : ";
    quotient_list.push_back(1);
    
    // Final Output
    for(int i = quotient_list.size(); i != 0; i--){
          cout << quotient_list[i-1];
          counter++;
          
          if(counter==4){
              counter = 0;
              cout << " ";
          }
    }

}

int main(){
 
    k_start(); // Calling the function 

    return 0;
}
