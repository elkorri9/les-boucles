#include <stdio.h>

int main() {
    int a , i , rs =1;
    
   
   printf("saisir un nombre : ");
   scanf("%d",&a);
   
   
   for(i=0 ; i<=a ; i++){
       rs = a * rs ;
       
   }
   printf("la puissance est  :%d",rs);

    return 0;
}