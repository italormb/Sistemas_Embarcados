#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>//PARA wait

void tratamento_alarme(int sig)
{
	system("date");
	alarm(1);

}

int main()
{
	int filho;	// PID do processo filho
	int fd[2];	// Descritores do pipe
	int i=0;
	int stm;
	char mensagem[10]= "ps";
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	filho = fork();
	// Codigo do filho
	if(filho == 0)
	{
		//printf("Qual seu nome\n");
		//scanf("%s",mensagem);
		if (write(fd[1], mensagem, sizeof(mensagem)) < 0)
			printf("Erro na escrita do pipe\n");
	
	}
	// Codigo do pai
	else
	{
		
		if(read(fd[0], mensagem,sizeof(mensagem)) < 0) 
		printf("Erro na leitura do pipe\n");
		else
			while(1){
				i++;
				printf("\nAperte CTRL+C para sair do Código:\n");
				stm = system(mensagem);
				printf("%i\n",i);
				sleep(1);
				signal(SIGALRM, tratamento_alarme);
				alarm(1);
				
            }
		wait(NULL);
	}
	return 0;
}
