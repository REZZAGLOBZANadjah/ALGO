#include <stdlib.h>
#define N 4
#define NBR 20


int main() {
    int i,j,Mat[N][N];
    //remplissage Matrice  avec des valeurs aléatoire
    for(i=0 ; i<N ; i++)
        {
            for(j=0 ; j<N ; j++)
            {          
                Mat[i][j]=rand()%NBR;
            }
        }
    printf("-----------------------------------\n");
    //affichage  
 for(i=0 ; i<N ; i++)
  {
      for(j=0 ; j<N ; j++)
            {  
      printf("%d \t",Mat[i][j]);
            }
              printf("\n");
  }  
  printf("\n");

       // Tri Matrice
int temp;
bool s=false;
do{
 s=false;
for(i=0 ; i<N ; i++)
        {
            for(j=0 ; j<N ; j++)
            {   
                if(Mat[i][j]>Mat[i][j+1])
                {
                    temp=Mat[i][j];
                    Mat[i][j]=Mat[i][j+1];
                    Mat[i][j+1]=temp;
                    s=true;
                }
            }
        }
    
}while(s==true);
printf("---------------------\n");
       //affichage Matrice triée
       
 for(i=0 ; i<N ; i++)
  {
      for(j=0 ; j<N ; j++)
            {  
      printf("%d \t",Mat[i][j]);
            }
              printf("\n");
  }  
  printf("\n");
    return 0;
}
