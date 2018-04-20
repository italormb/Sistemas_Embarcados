#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  int fp, i;
  char nome[]="Nome: ",idade[]="Idade: ",anos[]=" anos",string[100], string_2[100];
  

  fp = open ("questao2.txt", O_WRONLY | O_CREAT, S_IRWXU);
  if(fp==-1)
  {
    printf ("Erro na abertura do arquivo.\n");
    exit (1);
  }
  
  printf("Digite o seu nome: ");
  scanf("%s",string);
  printf("Digite a sua idade: ");
  scanf("%s",string_2);
 
  

  
  for(i=0; nome[i]; i++)
    write(fp, &(nome[i]), 1); 
  for(i=0; string[i]; i++)
    write(fp, &(string[i]), 1); // Grava a string, caractere a caractere 
  write(fp, "\n", 1);
  for(i=0; idade[i]; i++)
    write(fp, &(idade[i]), 1); 
  for(i=0; string_2[i]; i++)
    write(fp, &(string_2[i]), 1); // Grava a string, caractere a caractere */
  for(i=0;anos[i]; i++)
    write(fp,&anos[i], 1); // Grava a string, caractere a caractere */
  write(fp, "\n", 1);
  close(fp);
  printf("Arquivo foi criado com sucesso!\n");
  printf("%s\n %s\n",string, string_2);


  return 0;
}

/*
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
  int fp, i;
  char string[100];

  fp = open ("exercicio5.txt", O_WRONLY | O_CREAT, S_IRWXU);
  if(fp==-1)
  {
    printf ("Erro na abertura do arquivo.\n");
    exit (1);
  }
  printf("Entre com a string a ser gravada no arquivo:");
  gets(string);
  for(i=0; string[i]; i++)
    write(fp, &(string[i]), 1); // Grava a string, caractere a caractere  
  write(fp, "\n", 1);
  close(fp);

  return 0;
}
*/