#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	int i=0;
	char * lista_de_argumentos[]= {"", NULL};

	
	for(i=1; i < argc;i++){
		if(fork()==0){
			execvp(argv[i], lista_de_argumentos);
		}
	}
	
	return 0;
}