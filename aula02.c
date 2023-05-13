#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>



int main()
{
    //divisor
    void programa1 (void)
    {
        int valor1, valor2, resto, quo;


        printf("Digite um valor inteiro: ");
        scanf("%d", &valor1);



        printf("Digite outro valor inteiro: ");
        scanf("%d", &valor2);


        if (valor2==0)
        {
        printf("\nNão é possível dividir por zero.");
        }
        else
        {
        resto = valor1%valor2;
        quo = valor1/valor2;
        printf("\nResto: %d", resto);
        printf("\nQuociente: %d", quo);
        }
    }

    //Análise de caractere
    void programa2 (void)
    {
    
        char caracter;

        printf("Digite um caracter: ");
        scanf("%c", &caracter);

        if (caracter >= 48 && caracter <= 57){
        printf("\nO valor é um número!");
        }
        else if (caracter >= 65 && caracter <= 90)
        {
        printf("\nO caracter é uma letra maiúscula!");
        }
        else if (caracter >= 97 && caracter <= 122)
        {
        printf("\nO caracter é uma letra minúscula!");
        }
        else
        {
        printf("\nEsse caracter não é uma letra ou número.");
        }
    }

    //inversão
    void programa3 (void)
    {
        int A, B, C;
    
        printf("Digite um valor para A: ");
        scanf("%d", &A);

        printf("Digite um valor para B: ");
        scanf("%d", &B);
        
        C=A;
        A=B;
        B=C;

        printf("\nDepois da inversão:\n");
        printf("\nA: %d", A);
        printf("\nB: %d", B);

    }

    //não funciona
    void programa4 (void)
    {
        int n = 0;
        bool result;

        printf("Número: ");
        scanf("%d", &n);

        result = isdigit(n);
        printf("Your boolean variable is: %s", result ? "true" : "false");

        return 0;
        
        if (result==true){

        printf("Número inválido");
        }
        else
        {
         printf("Número válido!");
        }

    }
    
    programa1();
    return 0;

}
