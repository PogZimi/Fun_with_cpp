#include<iostream>
#include<string>
using namespace std;

// Checks the Length of username : 
bool check_userLen(string username){
    bool approve = true;
    int len = username.size();

    if(len <= 2){
         cout << "Very Short Username :  " << len << endl;
         approve = false;
    }
    else{
         approve = true;
    }
    return approve;
}

// Check if any character is repeated in username
bool check_repetation(string username, char letter){
   bool approve = true;
   int len = username.size();
   for(int i = 0; i < len; i++){
      if(username[i] == letter && username[i+1] == letter) {
            cout << "RepetationError!!! --> Repeating :  " << letter << endl;
			approve = false;
     }
      else{
            approve = true;
      }
  }
   return approve;
}

// Avoid this , used to clear terminal screen
void clear(){
    system("cls");
}

// Driver Code
int main(){
    clear();

    int t_size;
    bool valid1;
    bool valid2;
    string t_username;
    char letter;

    cout << "Enter the username number :  " << endl;
    cin >> t_size; 
    cout << "Enter the character you dont want to be repeated : " << endl;
    cin >> letter;

    for(int i = 0; i < t_size; i++){
        cout << "Enter the username[" << i+1 << "] :  " << endl;
        cin >> t_username;
        valid1 = check_userLen(t_username);
        valid2 = check_repetation(t_username, letter);
    }
     
    cout << "[ 0 = True , 1 = False ]" << endl;
    cout << endl;
    cout << "Test Result For UserName_Length : " << valid1 << endl;
    cout << "Test Result For UserName_Repetation : " << valid2 << endl;
 
  
    return 0;
}
