#include <stdio.h>

int main()
{
    //média
    void programa1(void)
    {
        float nota1 = 100, nota2 = 100, nota3 = 100, media;
        

        printf("Nota 1: ");
        scanf("%f", &nota1);
    
        printf("Nota 2: ");
        scanf("%f", &nota2);
        
        printf("Nota 3: ");
        scanf("%f", &nota3);
        
        
        
        media = (nota1+nota2+nota3)/3;
        
        if (media<=4)
        {
            printf("\nSituação: Reprovado");
            printf("\nMédia: %f", media);
        }
        else if (media>=5.9)
        {
            printf("\nSituação: Aprovado");
            printf("\nMédia: %f", media);
        }
        else 
        {
            printf("\nSituação: Conselho");
            printf("\nMédia: %f", media);

        }
    }
    
    //conta até 10
    void programa2 (void)
    {
        int cont = 1;
    
        while(cont<=10)
        {
            printf("%d ", cont++);
        }
    }
    
    //imprimi os ímpares
    void programa3 (void)
    {
        int cont = 0, var;
        
        while(cont<=25)
        {
            var = cont % 2;
            
            if (var==1)
            {
                printf("%d ", cont);    
            }
            cont++;
        }
    }
    
    //imprimi os pares
    void programa4 (void)
    {
        int cont = 0, var;
        
        while(cont<=30)
        {
            var = cont % 2;
            
            if (var==0)
            {
                printf("%d ", cont);
            }
            
            cont++;
        }
    }
    
    programa1();
    return 0;
}
