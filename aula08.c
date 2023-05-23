#include <stdio.h>

int main()
{
    void Programa1 (void)
    {
        int numero[5];
        int k;
        
        for (k = 0; k<5; k++)
        {
        numero[k] = 7;
        printf("%d ", numero[k]);
        }
    }
    
    void Programa2 (void)
    {
        int vetor[10];
        int k;
        int comp = sizeof(vetor) / 4;
        
        for(k = 0; k < comp; k++)
        {
            printf("Número: ");
            scanf("%d", &vetor[k]);
        }
        
        printf("\n");
        
        for(k = 0; k < comp; k++)
        {
            printf("%d ", vetor[k]);
        }
    }
    
    void Programa3 (void)
    {
        int vetor[10];
        int k;
        
        for(k = 0; k < 10; k++)
        {  
            vetor[k] = k+1;
        }
        for(k = 0; k < 10; k++)
        {
            printf("%d ", vetor[k]);
        }
    }
    
    void Programa4 (void)
    {
       int vetor[10];
       int k = 0;
       
       while(k < 10)
       {
            vetor[k] = k+1;
            k++;
       }
       
       k = 0;
       
       while(k < 10)
       {
            printf("%d ", vetor[k]);
            k++;
       }
    }
    
    Programa4();
    
    return 0;
}
