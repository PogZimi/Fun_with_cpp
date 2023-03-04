#include<iostream>
using namespace std;

// Checks if the size entered is odd or even
// if odd: -> size = size-1;
// else : -> size = size;
int chk_type(int n){
      if(n%2!=0){
          return n-1;
      }
      else{
          return n;
      }
}

// Make UpperPart
void upper_part(int x){
     
     int n = chk_type(x);
     int star_count=1; 
     
     const int y = n;
     cout << n << endl;

     for(int i = 0; i < y/2; i++){

            for(int o = 0; o < star_count; o++){
                   cout << "* ";
            }

            for(int k = 0; k < n*2; k++){
                   cout << " ";
            }

            for(int f = 0; f < star_count; f++){
                   cout << "* ";
            }
                           
            n-=2;
            star_count++;
            cout << endl;
     }
    
     
     int equate = y + 2;    

     for(int i = 0; i < equate; i++){
            cout << "* ";
     }

     cout << endl;
}

// Make LowerPart
void lower_part(int x){

     int n = chk_type(x);
     const int y = n;

     int spaces = 2;
     int star_count = n/2;

     for(int i = 0 ; i < y/2; i++){
            for(int j = 0; j < star_count; j++){
                   cout << "* ";
            }

            for(int f = 0; f < spaces; f++){
                   cout << "  ";
            }

            for(int x = 0; x < star_count; x++){
                   cout << "* ";
            }
          
            star_count--;
            spaces+=2;
            cout << endl;
     } 

}

void execute(int n){
     chk_type(n);
     upper_part(n);
     lower_part(n);
}

int main(){
    
    int input;
    cout << "Enter the size of the butterfly wing : " << endl;
    cin >> input;

    execute(input);

    return 0;
}
