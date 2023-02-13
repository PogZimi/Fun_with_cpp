#include<iostream>
#include<vector>
using namespace std;

// Returns a list of duplicate values in the array

/*
---------------------------------------------------

If you want to add/remove values from the vector then 
Make sure you update the pointer-array[ ptr] size manually;

I am too lazy to do it 
Use stdlib.h 


*/

void print_f(vector<int>in){
     for(int i = 0; i < in.size(); i++){
            cout << in[i] << ",";
     }
}

int main(){ 

    vector<int>plx{1,9,2,2,9,7,4,3,1,56,8};
    vector<int>du;
    const int size = plx.size();
    int find_x;
    int* finder;

    int *ptr[11];
    for(int i = 0; i < size; i++){
          ptr[i] = &plx[i];
    }

    for(int i = 0; i < size; i++){
          find_x = plx[i];
       for(int j = 0; j < size; j++){
                if(find_x == plx[j]){
                      if(ptr[i] != ptr[j]){
                            du.push_back(plx[j]);
                            break;
                      }
                }
          }
    }

    print_f(du);
    
    return 0;
}

