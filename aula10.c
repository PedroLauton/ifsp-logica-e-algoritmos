#include <stdio.h>
#include <string.h>

int main()
{
    void Programa1 (void) 
    {
        int mat[3][3];
        int j, k, n = 0;
        
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                n += 2;
                mat[j][k] = n;
                
                printf("%d ", mat[j][k]);
                if(k == 2)
                {
                    printf("\n");
                }
            }
        }
    }
    
    void Programa2 (void)
    {
        int mat[3][3];
        int j, k, n = 0;
        
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("Número %d: ", ++n);
                scanf("%d", &mat[j][k]);
            }
        }
        
        printf("\n");
        
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                printf("%d ", mat[j][k]);
                if(k == 2)
                {
                    printf("\n");
                }
            }
        }
    }   
    
    void Programa3 (void)
    {
        char nome[6] = {'P', 'e', 'd', 'r', 'o', '\0'};
        int comp = 0, k = 0;
        comp = strlen(nome);
        
        while(k < strlen(nome))
        {
            printf("%c ", nome[k]);
            k++;
        }
        printf("\n\n");
        
        printf("O nome \"%s\" tem \"%d\" caracteres", nome, comp);
    }
    
    Programa3();
}