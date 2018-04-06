#include <stdio.h>
#include <stdlib.h>
#include "num_caracs.h"


/*int num_caracs(char *str){
	int cont =0;
	for(;*str;str++)
		cont++;
	return cont;
}*/

int main(int argc, char *argv[]){
	int contador=0,qtd=0;
	for(contador=0;contador<argc;contador++){
        printf("%s \t\n", argv[contador]);
        qtd = num_caracs(argv[contador]);
		printf("%d \n",qtd);
	}
	printf("\n");
	return 0;
	}