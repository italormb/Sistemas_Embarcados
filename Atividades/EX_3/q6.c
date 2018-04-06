#include <stdio.h>

int main(int argc, char *argv[]){
	int contador;
	for(contador=1;contador<argc;contador++){
		printf("%s\t", argv[contador]);
	}
	printf("\nNumero de entrada= %d\n", argc-1);
	return 0;
	}
