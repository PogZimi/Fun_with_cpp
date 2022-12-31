#include<iostream>
using namespace std;

// IDENTIFIES IF BASE IS ODD OR EVEN
bool calculate_base(int y, bool val){
     if(y%2==0){
         val = false;
     }
     else if(y%2==1){
         val = true;
     }
     return val;
}

// CALCULATES THE MEDIAN 
int calculate_median(int observation){
      bool u;
      bool core = calculate_base(observation, u);
      int median;

      // odd 
      if(core = true){
      median = (observation+1)/2;
      }
      // even 
      else if(core = false){
          median = (observation/2) + ((observation/2) + 1) / 2;
      }
      return median;
}

int main(){

    
    int k, owl=1,inc=0;
  
    // USER-INPUT
    cout << "|||| Enter the base length of triangle ( NO Decimals) : |||| --> ";
    cin >> k;
    system("cls");


    int median = calculate_median(k);
    
    // LOOP FOR THE BASE 
    for(int i = 0; i < k; i++){
          cout << "*";
    }
    cout << endl;
    
    // LOOP FOR THE REST
    for(int i = 0; i < median-2; i++){
           for(int j = 0; j < owl; j++){
                   cout << " ";
           }      
           cout << "*";
           for(int x = 0; x < k-(4+inc); x++){
                cout << " ";
           }
           cout << "*";
           cout << endl;

           owl+=1;
           inc+=2;
     }
  
    // LAST NOT THE LEAST
    for(int i = 0; i < k-median; i++){
           cout << " ";
    }
    cout << "*" << endl;

    return 0;
}


