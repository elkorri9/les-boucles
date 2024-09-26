#include <stdio.h>

int main() {
    int a  , cntr;
    
   
   printf("saisir un nombre : ");
   scanf("%d",&a);
   cntr = 0 ;
   do {
      a = a/10 ;
       cntr++;
   }while (a != 0);
   
   printf("Nombre de chiffres est   :%d",cntr);

    return 0;
}