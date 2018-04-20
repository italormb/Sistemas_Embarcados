#include <stdio.h>
#include "bib_arqs.h"


//int tam_arq_texto(char *nome_arquivo);
 
int main() {
 
    char nome_arquivo[100]; // nome do arquivo
    //FILE *arquivo; // ponteiro para o arquivo
    int tamanho; // tamanho em bytes do arquivo
     
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);
    tamanho=tam_arq_texto(nome_arquivo);
     // imprime o tamanho do arquivo
      printf("O arquivo %s possui %d bytes\n", nome_arquivo, tamanho);
 
    return 0;
 
}

/*int tam_arq_texto(char *nome_arquivo) //usa-se char* quando não sabe o tamanho.
{
	
    FILE *arquivo; // ponteiro para o arquivo
    long tamanho; // tamanho em bytes do arquivo

	 // abre o arquivo para leitura
    arquivo = fopen(nome_arquivo, "r");
 
    // verifica se o arquivo foi aberto com sucesso
    if (arquivo != NULL) {
        // movimenta a posição corrente de leitura no arquivo 
        // para o seu fim
        fseek(arquivo, 0, SEEK_END);
 
        // pega a posição corrente de leitura no arquivo
        tamanho = ftell(arquivo);     
     
    } else {
        printf("Arquivo inexistente");
    }

    return tamanho;

}*/