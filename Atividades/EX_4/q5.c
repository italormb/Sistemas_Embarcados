#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void le_arq_texto(char *nome_arquivo, char *conteudo);
void le_arq_texto(char* nome_arquivo,char* conteudo){

FILE *p;
int i=0;
char c;

p = fopen(nome_arquivo,"r");

while (!feof(p))
	{   
		fscanf(p,"%c",&c);	        
		conteudo[i]=c;
		i++;      
	}		
fclose(p);
}

int main() {

char nome_arquivo[80],conteudo[100];

// Le um nome para o arquivo a ser aberto: 
printf("\n\n Entre com um nome para lê o arquivo:\n");
scanf("%s",nome_arquivo);
le_arq_texto(nome_arquivo,conteudo);
printf("\n%s\n",conteudo);

return(0);
}