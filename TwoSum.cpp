#include<iostream>
#include<vector>
using namespace std;

void algorithm(vector<int>olm, int size, int target){

       int n, fx;
       vector<int>final_list;

       for(int i = 0; i < size; i++){
                               
                n = target - olm[i];
                fx = olm[i];
                olm[i] = 0;

                for(int j = 0; j < size; j++ ){
                      if(olm[j] == n){
                            final_list.push_back(olm[j]);
                            final_list.push_back(fx);
                            olm[j] = 0;
                            break;
                      }
                    
                }
           
            
       }
       
       cout << "----------------------- [ TwoSum Numbers -->  ] ----------------- \n";
       for(int i = 0; i < (final_list.size()/2)+1; i++){
               cout << "[ " << final_list[i] << " , " << final_list[i+1] << " ] " << endl;
               i+=1;
       }

}

int main(){

    int target, size, element;
    vector<int>nums;
    
    cout << "Target : " << endl;
    cin >> target;
    cout << "Size : " << endl;
    cin >> size; 

    for(int i = 0; i < size; i++){
          cout << "Element [" << i+1 << "] : " << endl;
          cin >> element;
          nums.push_back(element);
    }
    
    algorithm(nums, size, target);
     

    return 0;
}
