#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h> //para concatenar as strings com strcopy();

int main(int argc, const char * argv[])
{
  int fp, i;
  //
  const char *anos=" anos",*idade="Idade: ", *nome="Nome: ", *extensao=".txt";
  
  //Para extensao
  char *label = malloc(strlen(argv[1]) + strlen(extensao) + 2);
  //Para nome
  char *label_nome = malloc(strlen(nome) + strlen(argv[1])  + 2);
  //para idade
  char *label_idade = malloc(strlen(argv[2]) + strlen(idade) + strlen(anos) + 2);
  
  //Pegando a entrada argv[1] e concateando com a extensão .txt
 strcpy(label, argv[1]);
 strcpy(label+strlen(argv[1]), extensao);
 //concateando o nome
 strcpy(label_nome, nome);
 strcpy(label_nome+strlen(nome), argv[1]);
 //concatenando a idade
 strcpy(label_idade,idade );
 strcpy(label_idade+strlen(idade),argv[2]);
  strcpy(label_idade+strlen(argv[2])+strlen(idade)," anos");

  fp = open (label, O_WRONLY | O_CREAT, S_IRWXU);
  if(fp==-1)  {
    printf ("Erro na abertura do arquivo.\n");
    exit (1);
  }
  
    
  for(i=0; label_nome[i]; i++)
    write(fp, &(label_nome[i]), 1); // Grava a string, caractere a caractere 
  write(fp, "\n", 1);
  
  for(i=0; label_idade[i]; i++)
    write(fp, &(label_idade[i]), 1); 
  
  write(fp, "\n", 1);
  close(fp);
  printf("Arquivo foi criado com sucesso!\n");
  


  return 0;
}

