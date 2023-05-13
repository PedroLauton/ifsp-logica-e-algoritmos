#include <stdio.h>

int main()
{
    //switch com números
    void Programa1 (void)
    {
    int n1;
    
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &n1);
    
        switch (n1)
        {
        case 1 :
        printf("Domingo");
        break;
        
        case 2 :
        printf("Segunda");
        break;
        
        case 3 :
        printf("Terça");
        break;
        
        case 4 :
        printf("Quarta");
        break;
        
        case 5 :
        printf("Quinta");
        break;
        
        case 6 :
        printf("Sexta");
        break;
        
        case 7 :
        printf("Sábado");
        break;
        
        default:
        printf("Número fora do intervalo aceito."); 
        break;
        }
    }
    
    //Seletor de operação
    void Programa2 (void)
    {
        float n1, n2, n3;
        char ide;
        
        printf("Número 1: ");
        scanf("%f", &n1);
        
        printf("Número 2: ");
        scanf("%f", &n2);
        
        printf("\nOperação (+-*/): ");
        scanf(" %c", &ide);
        
        switch (ide)
        {
            case '+':
            n3 = n1 + n2;
            printf("\nResultado: %.2f", n3);
            break;

            
            case '-' :
            n3 = n1 - n2;
            printf("\nResultado: %.2f", n3);
            break;
            
            
            case '*' :
            n3 = n1 * n2;
            printf("\nResultado: %.2f", n3);
            break;

            
         
            case '/' :
            n3 = n1 / n2;
            printf("\nResultado: %.1f", n3);
             break;

            
            default :
            printf("\nOperador não encontrado");
            break;
        }
        
    }
    
    //do while 
    void Programa3 (void)
    {
        int n1, n2 = 0;
        
        do
        {
            printf("Digite um número: ");
            scanf("%d", &n1);
            
            n2 += n1;
            
            printf("Valor somado: %d\n", n2);
            
        }
        while (n1 != 0);
    }
    
    //for
    void Programa4 (void)
    {
        int n1;
        
        for (n1 = 0; n1 <= 1000; n1++)
        {
            printf("%d,", n1);
            
        }
    }
    
    //switch com caracter
    void Programa5 (void)
    {
        char letra;
        
        printf("Digite uma letra (A,B,C): ");
        scanf(" %c", &letra);
        
        switch (letra)
        {
            case 'a':
            case 'A':
                printf("\nAbacaxi");
                break;
                
            case 'b':
            case 'B':
                printf("\nBanana");
                break;
            case 'c':
            case 'C':
                printf("\nCacau");
                break;
                
            default:
                printf("\nCaracter inválido");
                break;
        }
    }
    
    //switch com os conjuntos numéricos
    void Programa6 (void)
    {
        int n1;
        char letra;
        
        printf("Digite um conjunto numérico (N,Z,Q,I,R): ");
        scanf(" %c", &letra);
        
        printf("\n");
        
        switch (letra)
        {
            case 'n':
            case 'N':
                
                for (n1 = 0; n1 <= 99; n1++)
                {
                    printf("%d,", n1);
                }
                    printf("%d...", n1);
                break;
                
            case 'z':
            case 'Z':
                
                    n1 = -50;
                    printf("...%d,", n1);
                    
                for (n1 = -49; n1 <= 49; n1++)
                {
                    printf("%d,", n1);
                }
                    printf("%d...", n1);
                break;
                
            case 'q':
            case 'Q':
                    printf("Exemplos: 0,05; 5/100; 0,3333...");
            break;
            
            case 'i':
            case 'I':
                    printf("Exemplos: 0,3146738573857; √2; √3...");
            break;
            
            case 'r':
            case 'R':
                    printf("{X ∈ R || R = N+Z+Q+I}");
            break;
            
            default: 
                    printf("Caracter inválido");
            break;
        }
    }
    
    Programa6();
    
    return 0;
    
}
