#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "bib_arqs.h"

/*int tam_arq_texto(char *nome_arquivo)
{
        int fd;
        int tamanho = 0;

        fd = open(nome_arquivo, O_RDONLY);

        if (fd==-1) {
                printf ("Erro na abertura do arquivo.\n");
                return -1;
                close(fd);
        }

        tamanho = lseek(fd, 0, SEEK_END);

        close(fd);

        if (tamanho == -1) 
                return -1;

        return tamanho;
}*/

int main(int argc, const char *argv[]){
int tamanho;    
char string[50];

    printf("informe o nome do txt: \n");
    scanf("%s", string);
    tamanho=tam_arq_texto(string);

    printf("\n Tamanho: %d\n",tamanho);
    return 0;


}