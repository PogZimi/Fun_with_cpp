#include<iostream>
using namespace std;

// starts the initial process 
void main_body(int chocolate_row, int chocolate_column){

    string three_spaces = "   ";
    
    for(int i = 0; i < chocolate_column; i++){
         for(int k = 0; k < chocolate_row; k++){
                 cout << " ---";
         }
         cout << endl;
         cout << "|";

         for(int o = 0; o < chocolate_row; o++){
                 cout << three_spaces << "|";  
         }
         cout << endl;
         
    }
}

// adds the last layer 
void last_layer(int chocolate_row){
        for(int k = 0; k < chocolate_row; k++){
                 cout << " ---";
         }
}


// makes the chocolate 
void make_me_a_chocolate(){
       int rows,columns;
       system("cls");

       cout << "Enter the No. of rows : " << endl;
       cin >> rows;
       cout << "Enter the No. of columns : " << endl;
       cin >> columns;

       system("cls");
       cout << "Your chocolaty bar is ready : \n\n";    

       main_body(rows, columns);
       last_layer(rows);

}

// you eat chocolate 
int main(){
    
    make_me_a_chocolate();
    
    return 0;
}

