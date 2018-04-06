#include "num_caracs.h"

int num_caracs(char *str){
	int cont =0;
	for(;*str;str++)
		cont++;
	return cont;
}

/*int main(){
  char string[]= "olhar";
  int qtd=0;
  qtd = minha_strlen(string);
  printf("%d\n",qtd);
}*/