#include <stdio.h>

int main() {
    int a , i , rs =1;
    int b ;
   
   printf("saisir un nombre : ");
   scanf("%d",&a);
   
   
   for(i=1 ; i<=a ; i++){
       rs = i + rs ;
       
   }
   printf("la factorielle d'un nombre que vous saisir : %d =%d \n",a,rs);

    return 0;
}