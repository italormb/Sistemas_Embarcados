#include <stdio.h>
#include <stdlib.h>
//Observações:
// int fwrite(const void *ptr, int size, int n, FILE *arq)
// ptr : é um ponteiro para void(qualquer tipo de ponteiro) contem o endeeço que pretender guarda no arquivio
//size indicado em bytes de cada elemento que pretendemos escrever
// n indica o número de elementos que queremos escever
//arq descritor, indica o arquivo onde os dados srão colocados




int main()
{
  // criando a variável ponteiro para o arquivo
  FILE *pont_arq;
  char v[100]= "ola mundo\n";
 
  //abrindo o arquivo
  pont_arq = fopen("olamundo.txt", "wb");
 // if(fwrite(v, sizeof(char),100 , pont_arq) != 100)
  if(fwrite(v, sizeof(char),100 , pont_arq))
  // fechando arquivo
  fclose(pont_arq);
 
  //mensagem para o usuário
  printf("O arquivo foi  criado com sucesso!\n");
 
  system("pause");
  return(0);
}

