#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  int fp, i;
  char ctr, string[100];
  
  fp = open (argv[1], O_RDONLY);
  if(fp==-1)
	{
		printf ("Erro na abertura do arquivo.\n");
		exit (1);
	}
  while(read(fp, &ctr, 1) != 0)
  			string[i++]=ctr; //lendo a string, caractere por caractere
  	  
  close(fp);
  printf("Arquivo foi lido com sucesso!\n");
  printf("\nConteudo: %s \n",string);

  return 0;
}

