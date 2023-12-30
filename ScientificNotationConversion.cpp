#include<bits/stdc++.h>
using namespace std; 

#define F_TEN 10.0
int size=0;

// FORMAT : 

// 543430 --> 5.434 x 10^5
void scientific_notation1(float x){
  size=0;
  {
    for(int i = 0; 10 < x; i++){
        x=x/F_TEN;
        size++;
    }
    printf("Format1 : %.3f x 10^%d \n", x, size);
  }
}

// 2323 --> 0.232 e 4 
void scientific_notation2(float y){
  size=0;
  {
    for(int i = 0; 1 < y; i++){
         y = y/F_TEN;
         size++;
    }
    printf("Format2 : %.3f x 10^%d \n", y, size);
  } 
}

int main(){
    float z;
    cin >> z; 
    return 0;
}
