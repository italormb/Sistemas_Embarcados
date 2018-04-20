#include <stdio.h>
#include <stdlib.h>
//Observações:
// int fwrite(const void *ptr, int size, int n, FILE *arq)
// ptr : é um ponteiro para void(qualquer tipo de ponteiro) contem o endeeço que pretender guarda no arquivio
//size indicado em bytes de cada elemento que pretendemos escrever
// n indica o número de elementos que queremos escever
//arq descritor, indica o arquivo onde os dados srão colocados


int main(int argc, char *argv[]){
  int contador;
  char nome[3],idade[3],string[6]="nome:",string2[7]=" anos",string3[7]="Idade: ",barra_n[3]="\n";
  FILE *pont_arq;
  printf("qual o seu nome: \n");
  scanf("%s", nome);
  printf("qual o seu idade: \n");
  scanf("%s", idade);
  for(contador=1;contador<argc;contador++){
    printf("%s\t", argv[contador]);
  }
 
  //abrindo o arquivo
  pont_arq = fopen("q2.txt", "wb");
 // if(fwrite(v, sizeof(char),100 , pont_arq) != 100)
  if(fwrite(string, sizeof(char),6, pont_arq))
  if(fwrite(nome, sizeof(char),3 , pont_arq))
  if(fwrite(barra_n, sizeof(char),3 , pont_arq))
    if(fwrite(string3, sizeof(char),7 , pont_arq))
  if(fwrite(idade, sizeof(char),3, pont_arq))
  if(fwrite(string2, sizeof(char),5 , pont_arq))
  if(fwrite(barra_n, sizeof(char),3 , pont_arq))
  // fechando arquivo
  fclose(pont_arq);
 
  //mensagem para o usuário
  printf("O arquivo foi  criado com sucesso!\n");
 
  system("pause");
  
 // printf("\nNumero de entrada= %d\n", argc-1);
  return 0;
  }