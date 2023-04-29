#include <stdio.h>


int main()
{
    //X++ atribui e add int
    //++X add atribui 1

    //inversão
    void programa1 (void)
    {
        int X = 5, Y = 8;

        Y = X++;
        printf("X = %d\n", X);
        printf("Y = %d\n", Y);
    }

    //valor positivo
    void programa2 (void)
    {
        int valor=0;
        char letra;
    
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if (valor == 0)
        {
            printf("O valor é igual a 0.");
        }
        else if (valor > 0 )
        {
            printf("O valor é positivo!");
        }
        else
        {
            printf("O valor é negativo.");
        }
    }

    //letra maiuscula
    void programa3 (void)
    {
        char letra;
        
        printf("Escreva uma letra minuscula: ");
        scanf("%c", &letra);
        printf("A letra em maiusculo é: %c", letra-32);
    }
    
    //é maior de idade?
    void programa4 (void)
    {
        int idade = 0;
        
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > 18)
        {
            printf("\nVocê pode dirigir!\n");
            printf("É só comprar um carro!");
        }
        else
        {
            printf("\nVocê é menor de idade, portanto, nem pense em comprar um carro >=(\n");
            printf("Fim!");
        }
    }
    
    //média
    void programa5 (void)
    {
        int faltas = 0;
        float media = 0;

        printf("Média: ");
        scanf("%f", &media);

        printf("Faltas: ");
        scanf("%d", &faltas);

        if (!(media > 5.9 && faltas < 10))
        {
            printf("Aprovado!");
        }
        else
        {
            printf("Reprovado.");
        }
    }
    
    //maior, menor ou igual
    void programa6 (void)
    {
        int valor1 = 0, valor2 = 0;

        printf("Escreve uma valor inteiro: ");
        scanf("%d", &valor1);

        printf("Escreve outro valor inteiro: ");
        scanf("%d", &valor2);

        if (valor1 == valor2)
        {
            printf("\nOs valores são iguais!");
        }
        else if (valor1 > valor2)
        {
            printf("\nO número %d é maior", valor1);
        }
        else
        {
            printf("\nO número %d é maior", valor2);
        }
    }
    
    programa2();
    return 0;
}