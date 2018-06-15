//$ gcc ler_banco_de_dados.c -o ler_banco_de_dados
//$ ./ler_banco_de_dados
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int main(void)
{
    int contador = 0;
    int numPalavras = 0;
    char* palavras[50];
    char line[500], string[50], x[50]="Banco_de_Dados/";
    scanf("%s",string);
    strcat(string,".txt");
    strcat(x,string);
    printf("%s\n",x);

    FILE *arquivo;
    arquivo = fopen(x, "r");

    if (arquivo == NULL){
        printf("Error na abertura do arquivo\n");
        return EXIT_FAILURE;
    } 

    while(fgets(line, sizeof line, arquivo) != NULL)
    {
        //Adiciona cada palavra no vetor, aloca na memoria e copia, organizar o espaço
        palavras[contador++] = strdup(line);

        //Conta a quantidade de palavras
        numPalavras++;
    }

    for (contador = 0; contador < numPalavras; contador++)
        printf("%s", palavras[contador]); //Exibi as palavras que estao no vetor.

    printf("\n\n");

    fclose(arquivo);

    return 0;

}