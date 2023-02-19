#include<iostream>
using namespace std;

void make_parallelogram(){

    int horizontal_side;
    int slanting_side;
    
    cout << "ENTER THE SIZE OF HORIZONTAL SIDE : "  << endl;
    cin >> horizontal_side;
    cout << "ENTER THE SIZE OF SLANTING SIDE : " << endl;
    cin >> slanting_side;

    int space_1 = slanting_side-1;
    int space_2 = (horizontal_side+slanting_side)-((slanting_side-1) + 2);
    int o=0;
    
    // Horizontal side1 
    for(int i = 0; i < slanting_side-1; i++){
          cout << " ";
    }

    for(int i = 0; i < horizontal_side; i++){
          cout << "*";
    }
    cout << endl;
    
    // Slanting side1 & Slanting side2
    for(int i = 0; i < slanting_side-2; i++){
          space_1--;
          space_2--;
          for(int j = 0; j < space_1; j++){
                   cout << " ";     
          }
          cout << "*";

          for(int k = 0; k < (space_2+o); k++){
                       cout << " ";
          }
          cout << "*";
          cout << endl;
          o++;
    }
    
    // Horizontal side2
    for(int i = 0; i < horizontal_side; i++){
         cout << "*";
    }
}


int main(){

    make_parallelogram();
  
    return 0;
}
