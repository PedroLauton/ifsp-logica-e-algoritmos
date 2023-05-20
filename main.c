#include <stdio.h>

int main () {
    
    void Trabalho1 (void) {
        int n1, n2, res, quo = 0;
        
        printf("Programa 3 - Resto da Divisão\n");
        
            printf("\nNúmero 1 (Dividendo): ");
            scanf("%d", &n1);
         
            printf("Número 2 (Divisor): ");
            scanf("%d", &n2);
     
        if (n2 == 0) {
            printf ("\nOperação inválida");
        }
        
        else {
            
            if (n1 >= 'A' && n1 <= 'Z' || n1 >= 'a' && n1 <= 'z' || n2 >= 'A' && n2 <= 'Z' || n2 >= 'a' && n2 <= 'z') {
                printf ("Operação inválida");
            }
            
            else {
                quo = n1 / n2;
                res = n1 % n2;
                printf("\nQuociente: %d", quo);
                printf("\nResto: %d", res);
            }
        }
    }
    
    void Trabalho2 (void) {
        
        int n1, n2, aux = 0;
        printf("    Programa 4 - Troca de Valores\n");
        
            printf("\nValor 1: ");
            scanf("%d", &n1);
            
            printf("Valor 2: ");
            scanf("%d", &n2);
        
       aux=n1;
       n1=n2;
       n2=aux;
        
            printf("\nApós troca: ");
            printf("\n\nValor 1: %d", n1);
            printf("\nValor 2: %d", n2);
    }
    
    void Trabalho3 (void) {
     
        printf("Programa 5 - Par ou Ímpar?\n");
     
        int num, res = 0;
     
        printf("\nDigite o número: ");
        scanf("%d", &num);
     
        res = num % 2;
     
        if (res == 0) {
            printf("O número %d é par", num);
        }
     
        else {
            printf("O número %d é ímpar", num);
        }
    }
    
    void Trabalhoalt3 (void) {
     
        printf("Programa 5 - Par ou Ímpar?\n");
     
        int num = 0;
     
        printf("\nDigite o número: ");
        scanf("%d", &num);
     
        if (num % 2 == 0) {
            printf("O número %d é par", num);
        }
     
        else {
            printf("O número %d é ímpar", num);
        }
    }
    
    void Trabalho4 (void) {    
        
        printf("Programa 6 - Comparação e diferença\n");
        
        int n1, n2, result = 0;
        printf("\nNúmero 1: ");
        scanf("%d", &n1);
        
        printf("Número 2: ");
        scanf("%d", &n2);
        
        if (n1 > n2) { 
            printf("\nO número %d é maior do que o número %d", n1, n2);
            result = n1 - n2;
            printf("\nDiferença de: %d", result);
        }
        
        else {
            printf("\nO número %d é maior do que o número %d", n2, n1);
            result = n2 - n1;
            printf("\nDiferença de: %d", result);
        }
    
    } 
    
    void Trabalho5 (void) {
        float n1, n2, n3, result = 0;
        
        printf("    Programa 7 - Aproveitamento Escolar");
        
        printf("\nNota 1: ");
        scanf("%f", &n1);
        
        printf("\nNota 2: ");
        scanf("%f", &n2);
        
        printf("\nNota 3: ");
        scanf("%f", &n3);
        
        result = (n1 + n2 + n3) / 3;
        
        printf("\nMédia: %f", result);
        
        if (result > 5.9) {
            printf("\nSituação: Aprovado");
        }
        
        else {
            if (result > 4) {
                printf("\nSituação: Reprovado");
            }
            
             else {
                printf("\nSituação: Exame");
            }
        }
        
    }
    
    void TesteWhile1 (void) {
        int cont = 0;
        
        while (cont < 5) {
            printf("#");
            cont = cont + 1;
        }
    
    }
    
    void TesteWhile2 (void) {
        
        int cont = 1;
        
        while (cont < 11) {
            printf ("%d ", cont);
            cont++;
        }
    }
    
    void TesteWhile3 (void) {
        
        int cont = 1;
        
        while (cont < 26) {
            /*O "else" não é necessário, pois o programa não precisa fazer algo diferente, assim, o programa só vai excluír o que não estiver dentro da condição*/
            if (cont % 2)
                printf ("%d ", cont);
                cont++;
        }
    }
    
    void Trabalho6 (void) {
        
       int num = 0, sum = 0;
       
       while (num < 10) {
            num++;
            printf("%d ", num);
            sum = num + sum++;
       }
       
     printf("\nSomatório: %d", sum);
    }
    
    void Trabalho7 (void) {
        
       int num, sum, cont = 0;
       
       printf("Número: ");
       scanf("%d", &cont);
       
       if (1 <= cont && cont <= 50) {
           
            while (num < cont) {
               num++;
               printf("%d ", num);
               sum = num + sum++;
           }
           printf("\nSomatório: %d", sum);
       }
       
       else {
           printf("\nNúmero fora da margem de cálculo");
       }
    }

    void Trabalho8 (void) {
        
      int n = 0;
      
      char resp = 's';
      
      while (resp == 's' || resp == 'S') {
            printf("\033[2J");
            printf("\033[1;34H");
            
            printf("\t\tPar ou Ímpar\n\n");
            printf("\033[3;1H");
            printf("Número: ");
            scanf("%d", &n);
            
            if (n % 2 == 0) {
                printf("%d é par\n", n);
            }
            
            else {
                printf("%d é ímpar\n", n);
            }
            
            printf("Novo processamento? (s/n): ");
            scanf(" %c", &resp);
      }
    }
    
    void TesteFor1 (void) {
        
      int i = 0;
    
      for (i = 1; i < 11; ++i)
      {
        printf("%d ", i);
      }
    }
    
    void TesteFor2 (void) {
        
      int i = 0;
    
      for (i = 1; i <= 30; ++i)
      {
          if (i % 2 == 1)
        printf("%d ", i);
      }
    }
    
    void TesteFor3 (void) {
        
      int i = 0;
    
      for (i = 0; i <= 30; ++i)
      {
          if (i % 2 == 1)
        printf("%d ", i);
      }
    }
    
    void TesteFor4 (void) {
        
      int i, num = 0;
      
      printf("Insira número: ");
      scanf("%d", &num);
      
        if (num >= 1 && num <= 50) {
            for (i = 1; i <= num; ++i) {
                printf("%d ", i);
                
            }
        }
        
        else {
            printf("Número fora o intervalo permitido");
        }
    }
    
    void TesteFor5 (void) {
        
        // num = número escolhido, sum = váriável da soma, cont = variável da contagem
        int num, sum, cont = 0;
        
        printf("Insira número positivo: ");
        scanf("%d", &num);
        
        // O loop termina quando cont chega ao mesmo valor que num, enquanto isso, sum, soma todos os números que vão sendo apresentados
        for(cont = 1; cont <= num; ++cont)
        {
            sum += cont;
            printf("%d ", cont);
        }
    
        printf("\nSoma = %d", sum);
    }
    
    void TesteFor6 (void) {
        int i;
        int num, sum = 0;
        
        for(i = 0; i < 5; i++)
        {
            printf("\033[2J");
            printf("\033[2;10");
            printf("Número: ");
            scanf("%d", &num);
            if (num < 0) {
                continue;
            }
            sum = sum + num;
        }
    
        printf("\nA soma é: %d", sum);
    }
    
    void TesteSwitchCase1 (void) {
        
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
    
    void TesteSwitchCase2 (void) {
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
    
    void TesteDo1 (void) {
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
    
    void Trabalho9 (void) {
        int n1;
        
        for (n1 = 0; n1 <= 1000; n1++)
        {
            printf("%d,", n1);
            
        }
    }

    void TesteSwitchCase3 (void) {
        
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
    
    void TesteSwitchCase4 (void) {
        int n1;
        char letra;
        
        printf("Digite uma letra (N): ");
        scanf(" %c", &letra);
        
        switch (letra)
        {
            case 'n':
            case 'N':
                
                for (n1 = 0; n1<=100; n1++)
                {
                    
                    printf("%d,", n1);
                }
                break;
                
                default: 
                printf("Caracter inválido");
                break;
        }
    }
    
    TesteSwitchCase4();
    return 0;
    
}