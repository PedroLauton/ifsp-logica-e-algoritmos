#include <stdio.h>

int main()
{
    void Programa1 (void)
    {
        int vet[7], aux;
        
        for(int k = 0; k < 7; k++)
        {
            printf("Número %d: ", k+1);
            scanf("%d", &vet[k]);
        
            if(vet[k] % 2 == 0)
            {
                aux += vet[k];
            }
        }
        printf("\nSoma dos pares: %d", aux);
    }
    void Programa2 (void)
    {
        int aux1, aux2;
        char novo;
        
        do
        {
            printf("\033[2J");   
            printf("\033[1;1H"); 
            
            printf("Digite um número: ");
            scanf("%d", &aux1);
            
            if(aux1 % 2 == 0)
            {
                printf("\nEsse número é par!");
            }
            else
            {
                printf("\nEsse número é ímpar!");
            }
            
            printf("\n\nDeseja um novo processamento(S/N)?:  ");
            scanf(" %c", &novo);
            
            switch(novo)
            {
                case 's':
                case'S':
                    aux2 = 1;
                    break;
                
                case 'n':
                case 'N':
                    aux2 = 0;
                    
                default: 
                    break;
            }
        } 
        while(aux2 == 1);
    }
    
    Programa2();
    return 0;
}