#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Para executar o comando unbuffer deve fazer a instalção do pacote abaixo:
$ sudo apt-get install expect
*/


int main(void)
{
    int i = 0;
    int numPalavras = 0;
    char* palavras[50];
    char line[50];
    char command[50];

    strcpy( command, "unbuffer ./palavras palavras.c >> file.txt" );
    system(command);

    FILE *arquivo;
    arquivo = fopen("file.txt", "r");

    if (arquivo == NULL)
        return EXIT_FAILURE;

    while(fgets(line, sizeof line, arquivo) != NULL)
    {
        //Adiciona cada palavra no vetor
        palavras[i] = strdup(line);

        i++;

        //Conta a quantidade de palavras
        numPalavras++;
    }

    int j;

    for (j = 0; j < numPalavras; j++)
        printf("\n%s", palavras[j]); //Exibi as palavras que estao no vetor.

    printf("\n\n");

    fclose(arquivo);

    return EXIT_SUCCESS;
}
