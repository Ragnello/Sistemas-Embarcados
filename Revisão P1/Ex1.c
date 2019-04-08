#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char chamada[50];
	
   if(argc == 2)
   {
      sprintf(chamada, "date -d 01/01/%s +\"%%A\"", argv[1]);
      fprintf(stderr, "\tAno novo: ");
      system(chamada);
      sprintf(chamada, "date -d 05/01/%s +\"%%A\"", argv[1]);
      fprintf(stderr, "\tDia do trabalhador: ");
      system(chamada);
      sprintf(chamada, "date -d 12/25/%s +\"%%A\"", argv[1]);
      fprintf(stderr, "\tNatal: ");
      system(chamada);
   }
   return 0;
}
