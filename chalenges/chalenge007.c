#include <stdio.h>

int main() {
    int a , i , rs , j;
    
      int nombre , chiffre ;
      
      printf("entrer un nombre : ");
      scanf("%d",&nombre);
      
      do {
        chiffre = nombre%10 ;
        printf("%d",chiffre);
        nombre = nombre / 10;
          
          
      }while(nombre>0);
         
    

    return 0;
}