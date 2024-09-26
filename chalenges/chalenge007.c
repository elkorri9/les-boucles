#include <stdio.h>

int main() {
    
    
      int nbr , c ;
      
      printf("entrer un nombre : ");
      scanf("%d",&nbr);
      
      do {
        c = nbr%10 ;
        printf("%d",c);
        nbr = nbr / 10;
          
          
      }while(nbr>0);
         
    

    return 0;
}