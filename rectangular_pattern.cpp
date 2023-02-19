#include<iostream>
using namespace std;

void make(int length, int width, int no_of_squares){

       system("cls");
       cout << "LENGTH OF THE RECTANGLE :  " << endl;
       cin >> length;
       cout << "BREADTH OF THE RECTANGLE : " << endl;
       cin >> width;
       cout << "NO. OF SQUARES : " << endl;
       cin >> no_of_squares;

    for(int i = 0; i < no_of_squares; i++){
          for(int j = 0; j < length; j++){
               cout << "* ";
          }
          cout << endl;
          for(int k = 0; k < (width-2); k++){
                cout << "*";
                for(int f = 0; f < (length*2)-3; f++){
                        cout << " ";                      
                }
                cout << "*";
                cout << endl;
          }
          for(int x = 0; x < length; x++){
                cout << "* ";
          }
          cout << endl;
    }         
}

int main(){
    
    int length;
    int width;
    int no_of_squares; 
   
    make(length, width, no_of_squares);
                         
    return 0;
}
