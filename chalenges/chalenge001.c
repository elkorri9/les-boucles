#include <stdio.h>

int main() {
   int a , i , rs;
   
   printf("saisir un nombre : ");
   scanf("%d",&a);
   printf("la table de multiplication de nombre que vous saisir : \n");
   
   for(i=1 ; i<=10 ; i++){
       rs = a * i ;
       printf("%d * %d = %d \n",a,i,rs);
   }
   
   

    return 0;
}