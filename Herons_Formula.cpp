#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Note : THIS PROGRAM CALCULATES THE AREA OF TRIANGLE USING THE HERON'S FORMULA 

RESTRICTIONS :
**NO FLOATING/DECIMAL POINT VALUES [ ONLY INTEGER VALUES ]

INPUT :

FIRST LINE OF INPUT : all sides of triangle 
SECOND LINE OF INPUT : unit of the sides of triangle 

*/

void prime_factorization(vector<int>& xmf, int number){
    
    int last_Val = number;
    int xtr = 2;

    for(int io_man = 0; last_Val != 1; io_man++){
        
             if(last_Val % xtr == 0){
                    last_Val /= xtr;
                    xmf.push_back(xtr);
                    xtr = 2;
             }
             else{
                   xtr++;
             }
    }                            
}

void print_vector_array(vector<int>& arr){
      cout << "Factors of the given input () : \n\n";
      for(int i = 0; i < arr.size(); i++){
               cout << arr[i] << endl;
      }
}

void calculate_area(vector<int>& factorized_list, string a_un){
         
         int area = 1;
         int root=1; 
         // sorting the array ( in ascending order )
         sort(factorized_list.begin(), factorized_list.end());

         for(int i = 0; i < factorized_list.size()-1 ; i++){
                  if(factorized_list[i] == factorized_list[i+1]){
                                 area = area * factorized_list[i];
                                 factorized_list[i] = 0;
                                 factorized_list[i+1] = 0;
                  }    
         }
         
         for(int i = 0; i < factorized_list.size()-1; i++){
                  if(factorized_list[i] != 0){
                        root = root * factorized_list[i];            
                  }
         }
      
         cout << "Area of the given triangle is  : " << area;
         if(root != 1){
              cout << " root " << root << " " << a_un<<"^2";
         }
         else{
              cout << " " << a_un<<"^2";
         }

}

int main(){
    
    // sides
    int a,b,c;
    // unit of sides
    string unit;
    // vector-array for storing factorized values 
    vector<int>factorized_num;
    
    cout << "Enter the sides of triangle : "; 
    cin >> a >> b >> c;                      
    cout << "Enter the unit of the sides : ";
    cin >> unit;             

    // semi-perimeter 
    const int semi_p = (a+b+c)/2;    
    // required data 
    int s_a_b_c[] = {(semi_p-a), (semi_p-b), (semi_p-c)};
    
    // using prime_factorization to find the factors of semi-perimeter, all the elements of s_a_b_c[]
    prime_factorization(factorized_num, semi_p);
    for(int i = 0; i < 3; i++){
          prime_factorization(factorized_num, s_a_b_c[i]);
    } 

    print_vector_array(factorized_num);
    calculate_area(factorized_num, unit);

    return 0;
}
