#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>//PARA wait

int main()
{
	int filho;	// PID do processo filho
	int fd[2];	// Descritores do pipe
	int i=0;
	char mensagem[10];
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	filho = fork();
	// Codigo do filho
	if(filho == 0)
	{
		printf("Qual seu nome\n");
		scanf("%s",mensagem);
		if (write(fd[1], mensagem, sizeof(mensagem)) < 0)
			printf("Erro na escrita do pipe\n");
	
	}
	// Codigo do pai
	else
	{
		
		if(read(fd[0], mensagem,sizeof(mensagem)) < 0) 
		printf("Erro na leitura do pipe\n");
		else
			printf("%s\n",mensagem );
		wait(NULL);
	}
	return 0;
}
