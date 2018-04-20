#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  int fp, i;
  char string[]="ola mundo!";

  fp = open ("ola_mundo.txt", O_WRONLY | O_CREAT, S_IRWXU);
  if(fp==-1)
  {
    printf ("Erro na abertura do arquivo.\n");
    exit (1);
  }
  
  for(i=0; string[i]; i++)
    write(fp, &(string[i]), 1); // Grava a string, caractere a caractere  
  write(fp, "\n", 1);
  close(fp);
  printf("Arquivo foi criado com sucesso!\n");

  return 0;
}