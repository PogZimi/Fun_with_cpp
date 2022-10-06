#include<iostream>
#include<vector>
using namespace std;

// Calculate age limit 
// Calculations are performed on basis of input provided by the user 
// CodeChef Age_Limit : 

class age_limit{
private:
   int size;
   int x,y,z;
   vector<int>real_age;
   vector<int>max_age;
   vector<int>min_age;
   
public:
   // Input 
   void get_data(){
       cin >> size;
       for(int i = 0; i < size; i++){
            cin >> x;
            cin >> y;
            cin >> z;
            real_age.push_back(z);
            max_age.push_back(y);
            min_age.push_back(x);
       }
   }
  
   void process(){
       for(int i = 0; i < size; i++){
             if(real_age[i] >= min_age[i] && real_age[i] < max_age[i] ){
                    cout << "YES" << endl;
             }
             else{
                    cout << "NO" << endl;
             }
       }
   }    
    
};


int main() {
	
   age_limit obj;
   obj.get_data();
   obj.process();
	
	return 0;
}
