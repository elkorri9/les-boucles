#include <stdio.h>

int main() {
    int a , i , rs;
   
   
   printf("saisir un nombre : ");
   scanf("%d",&a);
   
   
   for(i=1 ; i<=a ; i++){
       rs = i * 2  ;
           printf("%d\n",rs);
      
      
       
   }
   

    return 0;
}