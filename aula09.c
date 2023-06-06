#include <stdio.h>

int main()
{
    void Programa1 (void)
    {
      int vet[12];
      int arm1 = 0, arm2 = 0;
      
      for(int K = 0; K <= 11; K++)
      {
        printf("Número %d: ", K+1);
        scanf("%d", &vet[K]);
        
        if(vet[K] % 2 == 0)
        {
            arm1 += 1;
        }
        else 
        {
            arm2 += 1;
        }
      }
      printf("\nQuantidade de pares: %d", arm1);
      printf("\nQuantidade de ímpares: %d", arm2);
    }    
   
    void Programa2 (void)
    {
      int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
      int k = 0, j = 0;
      
      for(j = 0; j < 3; j++)
      {
        for(k = 0; k < 3; k++)
        {
            printf("%d", numeros[j][k]);
            if (k == 2)
            {
                printf("\n");
            }
        }
      }
    } 
    Programa2();
}