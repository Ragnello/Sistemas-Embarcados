//Exercicio 03 do arquivo 06_Processos_2.md


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
   int i, pid_filho;
   char *lista_args[] = {NULL, NULL};
   
   for(i = 1; i < argc; i++)
   {
      pid_filho = fork();
      if(pid_filho == 0)
      {
         lista_args[0] = argv[i];
	 execvp(lista_args[0], lista_args);
      }
      else
	 wait(NULL);
   }

   return 0;
}
