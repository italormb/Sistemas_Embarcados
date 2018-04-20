#include "bib_arqs.h"
#include <stdio.h>

int tam_arq_texto(char *nome_arquivo) //usa-se char* quando não sabe o tamanho.
{
	
    FILE *arquivo; // ponteiro para o arquivo
    int tamanho; // tamanho em bytes do arquivo

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

}