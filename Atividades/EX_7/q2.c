#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>//PARA wait

int main()
{
	int filho;	// PID do processo filho
	int fd[8];	// Descritores do pipe
	int i=0;
	char mensagem_f1[50]=" Pai, qual é a verdadeira essência da sabedoria?", mensagem_p1[100]=" Não façais nada violento, praticai somente aquilo que é justo e equilibrado.", mensagem_p2[100]="Mas até uma criança de três anos sabe disso!", mensagem_f2[100]=" Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...";
	// Cria o pipe
	pipe(fd);
	// Cria o processo
	filho = fork();
	// Codigo do filho
	if(filho == 0)
	{
		printf("Filho vai ler o pipe\n");
		if (write(fd[1], mensagem_p1, sizeof(mensagem_p1)) < 0)
			printf("Erro na escrita do pipe\n");
		if (write(fd[5], mensagem_p1, sizeof(mensagem_p1)) < 0)
			printf("Erro na escrita do pipe\n");
		if(read(fd[2], mensagem_p1,sizeof(mensagem_p1)) < 0) 
			printf("Erro na leitura do pipe\n");
		if(read(fd[6], mensagem_p2,sizeof(mensagem_p2)) < 0) 
			printf("Erro na leitura do pipe\n");
		else
				printf("PAI: %s\n", mensagem_p1);
				sleep(1);
				printf("PAI: %s\n", mensagem_p1);
				sleep(3);
			
	}
	// Codigo do pai
	else
	{   wait(NULL);
		printf("Pai vai escrever no pipe\n");
		if (write(fd[3], mensagem_p1, sizeof(mensagem_p1)) < 0)
			printf("Erro na escrita do pipe\n");
		if (write(fd[7], mensagem_p1, sizeof(mensagem_p1)) < 0)
			printf("Erro na escrita do pipe\n");
		if(read(fd[2], mensagem_f1,sizeof(mensagem_f1)) < 0) 
			printf("Erro na leitura do pipe\n");
		if(read(fd[8], mensagem_f2,sizeof(mensagem_f2)) < 0) 
			printf("Erro na leitura do pipe\n");
			printf("Pai terminou de escrever no pipe\n");
			printf("Filho : %s\n", mensagem_f1);
			sleep(2);
			printf("Filho: %s\n", mensagem_f1);
			sleep(4);

		wait(NULL);
	}
	return 0;
}
