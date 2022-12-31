#include<iostream>
using namespace std;

// Some ugly awful code written by me 

int main(){
    
    int n;
    cout << "Enter the size : " << endl;
    cin >> n;

    int spaces = 1;
    int counter = 4;
    
    // Base 
    for(int i = 0; i < n; i++){
             cout << "* ";
    }
    cout << endl;
    
    // Main loop for both sides 
    for(int i = 0; i < n-2; i++){

         for(int i = 0; i < spaces; i++){
               cout << " ";
         }
         for(int i = 0; i < 1; i++){
               cout << "*";
               for(int k=0; k < (n*2)-counter; k++){
                     cout << " ";
               }
               cout << "*";
         }
         

         spaces+= 2;
         counter+=2;
         cout << endl;
    }
    
    // Final dot 
    for(int i = 0; i < (n*2) - 3; i++){
         cout << " ";
    }
    cout << "*";


    return 0;
}

