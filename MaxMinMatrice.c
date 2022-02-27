// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define N 4
#define NBR 20
int main() {
    int i,j,Mat[N][N],max,min;

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
  max=Mat[0][0];
  min=Mat[0][0];
  for(i=0 ; i<N ; i++)
  {
      for(j=0 ; j<N ; j++)
            {  
                if(Mat[i][j]>max)
                max=Mat[i][j];
                 if(Mat[i][j]<min)
                min=Mat[i][j];
            }
  }  
printf("max= %d \n",max);
printf("min= %d \n",min);
    return 0;
}
