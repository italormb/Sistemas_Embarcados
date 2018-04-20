/*#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  int fp, i;
  char nome[]="Nome: ",idade[]="Idade: ",anos[]=" anos",string[100], string_2[100];
  

  fp = open ("ex3.txt", O_WRONLY | O_CREAT, S_IRWXU);
  if(fp==-1)
  {
    printf ("Erro na abertura do arquivo.\n");
    exit (1);
  }
  
  
 
 //escrevendo  no arquivo
  for(i=0; nome[i]; i++)
    write(fp, &(nome[i]), 1); 
  for(i=0; argv[i]; i++)
    write(fp, &(argv[i]), 1); // Grava a string, caractere a caractere 
  write(fp, "\n", 1);
  for(i=0; idade[i]; i++)
    write(fp, &(idade[i]), 1); 
  for(i=0; string_2[i]; i++)
    write(fp, &(string_2[i]), 1); // Grava a string, caractere a caractere 
  for(i=0;anos[i]; i++)
    write(fp,&anos[i], 1); // Grava a string, caractere a caractere 
  write(fp, "\n", 1);
  close(fp);
  printf("Arquivo foi criado com sucesso!\n");
  printf("%s\n %s\n",string, string_2);


  return 0;
} 
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
  int fd;
  char nomearq[128];
  char ext[] = ".txt";
  char prnome[128] = "Nome: ";
  char pridade[128] = "Idade: ";
  char jmp = '\n';

  if (argc < 2) {
    printf("Uso: ./ola_usuario_2 nome idade\n");
    exit(-1);
  }

  strcpy(nomearq, argv[1]);
  strcat(nomearq, ext);

  strcat(prnome, argv[1]);
  strcat(pridade, argv[2]);

  fd = open(nomearq, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

        if (fd == -1) {
    printf("Erro ao abrir o arquivo '%s'\n", nomearq);
    exit(-2);
        }

  write(fd, prnome, strlen(prnome));
  write(fd, &jmp, 1);
  write(fd, pridade, strlen(pridade));
  write(fd, &jmp, 1);

        close(fd);

  return 0;
}

*/