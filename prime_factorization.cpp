#include<iostream>
#include<vector>
using namespace std; 

// main function
vector<int>prime_fact(int x){
    vector<int>prime_factorization;
    int divisor=2;

    while(x!=1){
        divisor=2;
        if(x % divisor ==0){
             x/=divisor;
             prime_factorization.push_back(divisor);
        }
        else{
            while(x%divisor!=0){
                 divisor++;
            }
            x/=divisor;
            prime_factorization.push_back(divisor);
        }
    }
    return prime_factorization;
}

int main(){

    int num;
    cout << "Enter a number [+ve] : " << endl;
    cin >> num;

    vector<int>list = prime_fact(num);
    for(int k=0;k<list.size();k++){
         cout << list[k] << endl;
    }

    return 0;
}
