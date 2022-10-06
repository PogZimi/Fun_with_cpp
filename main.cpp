#include<iostream>
#include<vector>
using namespace std;

class biryani_classes{
private:
   int finx1,size,x,y;
   vector<int>cls_num;
   vector<int>prices;
   int n1, n2;
   
public: 
   biryani_classes(){
         cin >> size; //1 
         for(int i = 0; i < size; i++){
                cin >> x;
                cin >> y;
                cls_num.push_back(x);
                prices.push_back(y);
         }
         
         if(size == 1){
              n1 = prices[0];
         }
         else if(size > 1){
              n1 = prices[0];
              n2 = prices[1];
         }
         
   }
   void algo(){
      for (int i = 0; i < size; i++)
      {
         if(prices[i] == n1){
               finx1 = cls_num[i] * prices[i];
               cout << finx1 << endl;
         }
         else if(prices[i] == n2){
               finx1 = cls_num[i] * prices[i];
               cout << finx1 << endl; 
         }
         else{
              finx1 = cls_num[i] * prices[i];
              cout << finx1 << endl;
         }
      }
   }
};

int main(){
   
   biryani_classes os;
   os.algo();

   return 0;
}