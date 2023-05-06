#include <stdio.h>

int main()
{
    
    //Somatório até 10
    void Programa1 (void)
    {
        int num = 0, arm = 0;
    
        while (num < 10)
        {
            num++;
            printf("%d ", num);
            arm = num + arm++;   
        }
            printf("\nSomatório: %d", arm);
    }
    
   
    //Somatório até n
    void Programa2 (void)
    {
        int n = 0, arm = 0, n1 = 0;
        
        printf("Número: ");
        scanf("%d", &n);
        
        if (n >= 1 && n <= 50)
        {        
             while (n1 < n)
            {
                n1++;
                printf("%d ", n1);
                arm = n1 + arm++;
            }
                printf("\n\nSomatório: %d", arm);
        }
        else
        {
                printf("\nNúmero fora do intervalo aceito");
        }
    }  
    
    //Interface com o usuário
    void Programa3 (void)
    {
        int n = 0;
        char resp = 's';
        
        while(resp == 's' || resp == 'S')
        {
            printf("\033[2J");   //Limpa a tela
            printf("\033[3;1H"); //Posiciona o cursor
            printf("Número: ");
            scanf("%d", &n);
            
            if (n % 2 == 0)
            {
                printf("\n%d é par\n", n);
            }
            else
            {
                printf("\n%d é ímpar\n", n);
            }
            
        printf("Novo processamento? (S/N): ");
        scanf(" %c", &resp);
        
        }
        
    }
    
    Programa3();
} 
