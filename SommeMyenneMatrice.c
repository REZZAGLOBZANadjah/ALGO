// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define N 4
#define NBR 20
int main() {
    int i,j,Mat[N][N];
    double somme=0,moy=0;
    //remplissage Tableau  avec des valeurs aléatoire
    for(i=0 ; i<N ; i++)
        {
            for(j=0 ; j<N ; j++)
            {          
                Mat[i][j]=rand()%NBR;
            }
        }
    printf("--------------\n");
    //affichage Tableau 
 for(i=0 ; i<N ; i++)
  {
      for(j=0 ; j<N ; j++)
            {  
      printf("%d \t",Mat[i][j]);
            }
              printf("\n");
  }  
      
  printf("--------------\n");
  for(i=0 ; i<N ; i++)
  {
      for(j=0 ; j<N ; j++)
            {  
                somme=somme+Mat[i][j];
            }
  }  

printf("somme= %f \n",somme);
printf("dimension de Matrice= %d \n",N*N);
printf("Moyenne=  %f /%d = %f\n",somme,N*N,somme/(N*N));
    return 0;
}
