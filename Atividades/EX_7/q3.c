#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main()
{
	int pid;
	int fd[2];
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	pid = fork();
	// Codigo do filho
	
		if(pid == 0)
		{
			char buffer_filho[100], msg_filho[100] = "FILHO1: Quando o vento passa, é a bandeira que se move.";
			if (write(fd[1], msg_filho, sizeof(msg_filho)) < 0)
				printf("Erro na escrita\n");
			//if(read(fd[0], buffer_filho, 100) < 0) 
			//	printf("Erro na leitura do pipe\n");
			//else
				//printf("%s\n", buffer_filho);			
		}
		else 
			// Cria o pipe
			pipe(fd);
			// Cria o processo
			pid = fork();
			// Codigo do filho
			
			if(pid == 0)
			{	
				char buffer_filho[100], msg_filho[100] = "FILHO2: Não, é o vento que se move.";
				if (write(fd[1], msg_filho, sizeof(msg_filho)) < 0)
					printf("Erro na escrita\n");
				if(read(fd[0], buffer_filho, 100) < 0) 
					printf("Erro na leitura do pipe\n");
				else
					printf("%s\n", buffer_filho);	

		    }
			else 
			{
		
				char buffer_pai[100], msg_pai[100] = "PAI: Não façais nada violento, praticai somente aquilo que é justo e equilibrado.";
				sleep(1);
				if (write(fd[1], msg_pai, sizeof(msg_pai)) < 0)
					printf("Erro na escrita do pipe\n");
				wait(NULL);
				if(read(fd[0], buffer_pai, 100) < 0) 
					printf("Erro na leitura do pipe\n");
				else
				printf("%s\n", buffer_pai);
			}
    
return 0;
}