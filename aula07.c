#include <stdio.h>

int main()
{
    void Programa1(void)
    {
        
        float n1, n2, n3, n4;
        char oper, novo;
        
        do
        {
            printf("\033[2J");   
            printf("\033[1;1H"); 
            
            printf("Número 1: ");
            scanf("%f", &n1);
            
            printf("Número 2: ");
            scanf("%f", &n2);
            
            printf("\nOperação(+-*/): ");
            scanf(" %c", &oper);
        
            switch (oper)
            {
            
                case '+':
                    n3 = n1 + n2;
                    printf("\nResultado: %.1f\n", n3);
                    break;
                
                case '-':
                    n3 = n1 - n2;
                    printf("\nResultado: %.1f\n", n3);
                    break;
                    
                case '*':
                    n3 = n1 * n2;
                    printf("\nResultado: %.1f\n", n3);
                    break;
                    
                case '/':
                    n3 = n1 / n2;
                    printf("\nResultado: %.1f\n", n3);
                    break;
                    
                default:
                    printf("\nOperador não encontrado.");
                    break;
            
            }
            
            printf("\nNovo Cálculo (S/N): ");
            scanf(" %c", &novo);
            
            switch (novo)
            {
                
                case 's':
                case 'S':
                    n4 = 1;
                break;
                
                case 'n':
                case 'N':
                    n4 = 0;
                    break;
                
                default:
                    printf("\nCaracter inválido.");
                    break;
            }
        }
        while(n4==1);
    }
    
    void Programa2 (void)
    {
        float sal, ir, inss, desc, sall;
        char novo;
        int n1;
        
        do
        {
            printf("\033[2J");   
            printf("\033[1;1H");
        
            printf("Salário Bruto: ");
            scanf("%f", &sal);
        
            if(sal>10000)
            {
                ir = sal * 0.10;
                printf("\nImposto sobre a renda (IR): %.1f", ir);
            }
            else 
            {
                ir = sal * 0.05;
                printf("\nImposto sobre a renda (IR): %.1f", ir);
            }
        
            inss = sal * 0.14;
            printf("\nINSS: %.1f", inss);
        
            desc = ir + inss;
            printf("\nDescontos: %.1f", desc);
        
            sall = sal - desc;
            printf("\nSalário Líquido: %.1f", sall);
    
            printf("\n\nNovo Cálculo (S/N): ");
            scanf(" %c", &novo);
            
            switch (novo)
            {
                case 's':
                case 'S':
                    n1 = 1;
                    break;
                
                case 'n':
                case 'N':
                    n1 = 0;
                    break;
                
                default:
                    printf("\nCaracter inválido.");
                    break;
            }
        }
        while(n1==1);
    }
    
    void Programa3 (void)
    {
        int numero[4] = {1, 4, 88, 45}, k, soma;
        
        /*printf("%d\n", numero[0]);
        printf("%d\n", numero[1]);
        printf("%d\n", numero[2]);
        printf("%d\n", numero[3]);
        printf("numero %ld bytes", sizeof numero);*/
        
        for (k = 0; k < 4; k++)
        {
            printf("%d ", numero[k]);
        }
        
        soma = numero[0] + numero[3];
        printf("\n\nSoma: %d", soma);
    }
    
    void Programa4 (void)
    {
        int n;
        char letra;
        float saldo;
        double salario;
        
        printf("Tipo int %ld bytes\n", sizeof n);
        printf("Tipo int %ld bytes\n", sizeof letra);
        printf("Tipo int %ld bytes\n", sizeof saldo);
        printf("Tipo int %ld bytes\n", sizeof salario);
        printf("\n");
        printf("Tipo int %ld bytes\n", sizeof (int));
        printf("Tipo int %ld bytes\n", sizeof (char));
        printf("Tipo int %ld bytes\n", sizeof (float));
        printf("Tipo int %ld bytes\n", sizeof (double));
    }
    
    Programa3();
    
    return 0;
}
    

