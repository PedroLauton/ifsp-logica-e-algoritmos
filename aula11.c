#include <stdio.h>

int main()
{
   char nome[15];
   int k = 0;
   int cont = 0;
   printf("Nome: ");
   scanf("%s", nome);
   printf("Olá %s\n", nome);
   for (k = 0; k < 15; k++)
   {
       if(nome[k] == '\0')
       cont++;
   }
   printf("%d nulos", cont);

    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
   char nome1[12] = "Joel Saade";
   char nome2[12];
   strcpy(nome2, nome1);
   printf("Nome2: %s", nome2);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
   char nome[20] = "Abracadabra";
   int a = 0;
   int cont = 0;
   
   printf("\tSTRINGS\n");
   printf("%s \n", nome);
   for(a = 0; a< 20; a++)
   {
       if(nome[a] == 'a' || nome[a] == 'A')
       cont++;
   }
   printf("Na palavra há %d a's", cont);
   
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
   char nome[30];
   int a = 0;
   int k = 0;
   int cont1 = 0;
   int cont2 = 0;
   int compri;

   printf("\tSTRINGS\n");
   printf("Nome: ");
   scanf("%s", nome);
   
   for(a = 0; a< 30; a++)
   {
       if(nome[a] == 'a' || nome[a] == 'A')
       cont1++;
   }
   printf("%d Letras 'a'\n", cont1);
   
   for (k = 0; k < 30; k++)
   {
       if(nome[k] == '\0')
       cont2++;
   }
   printf("%d nulos\n", cont2);
   
   while (nome[compri] != '\0')
   {
       compri++;
   }
   printf("Tamanho do string: %d", compri);
  

    return 0;
}
