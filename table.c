#include<stdio.h>
#include<stdlib.h>

void line();

struct table_list
{
   int table_num;
   int table_size;
};

void table(int t_num, int t_size){
   line();
   int num = 0;
   
   // Pointer array declaration , creating on runtime 
   int *tab = (int *) calloc(t_size, sizeof(int));
   
   // Initializing *array 
   for(int i = 0; i < t_size; i++){
       num += t_num;
       tab[i] = num;
   }    
   
   // Output 
   for(int i = 0; i < t_size; i++){
       printf("%d x %d == %d\n", t_num, i+1, tab[i]);
   }
    
   free(tab);
   line();
}

int main(){
    
    struct table_list o1;
    // User input 

    printf("Enter Table num --> \n");
    scanf("%d", &o1.table_num);
    printf("Enter Table size --> \n");
    scanf("%d", &o1.table_size);    

    table(o1.table_num, o1.table_size); 

    return 0;
}

void line(){
    printf("-------------------------------\n");
}
