//Exercicio 02 do arquivo 06_Processos_2.md

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   int i;
   
   for(i = 1; i < argc; i++)
   {
      system(argv[i]);
   }

   return 0;
}
