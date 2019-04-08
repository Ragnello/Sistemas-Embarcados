//Exercicio 01 do arquivo 06_Processos_2.md


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
   int i, pid_filho;
   
   for(i = 0; i < 3; i++)
   {
      pid_filho = fork();
      if(pid_filho == 0)
      {
         printf("Filho %d\n", i+1);
	 //return -1; //É necessário colocar esse return para que o filho nao crie mais filhos
      }
      else
	 wait(NULL);
   }

   return 0;
}
