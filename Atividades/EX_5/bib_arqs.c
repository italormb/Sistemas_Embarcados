#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int tam_arq_texto(char *nome_arquivo)
{
        int arquivo;
        int tamanho = 0;

        arquivo = open(nome_arquivo, O_RDONLY);

        if (arquivo==-1) {
                printf ("Erro na abertura do arquivo.\n");
                return -1;
                close(arquivo);
        }

        tamanho = lseek(arquivo, 0, SEEK_END);

        close(arquivo);

        if (tamanho == -1) 
                return -1;

        return tamanho;
}