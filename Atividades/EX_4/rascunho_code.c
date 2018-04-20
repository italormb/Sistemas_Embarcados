/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
}
FILE *fp;
char c;
fp = fopen("arquivo.txt","r"); // Arquivo ASCII, para leitura 
if(!fp)
{
printf( "Erro na abertura do arquivo");
exit(-1);
}
while((c = getc(fp) ) != EOF) // Enquanto não chegar ao final do arquivo 
printf("%c", c);
// imprime o caracter lido 
fclose(fp);
return 0;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
FILE *p;
int i=0;
char str[80],c, a_str[80];
// Le um nome para o arquivo a ser aberto: 
printf("\n\n Entre com um nome para lê o arquivo:\n");
scanf("%s",str);
/*if (!(p = fopen(str,"w"))) //Caso ocorra algum erro na abertura do arquivo..
{
printf("Erro! Impossivel abrir o arquivo!\n");
exit(1);
}
// Se nao houve erro, imprime no arquivo, fecha ...
fprintf(p,"Este e um arquivo chamado:\n%s\n", str);
fclose(p);*/
//abre novamente para a leitura
p = fopen(str,"r");
while (!feof(p))
{ 
fscanf(p,"%c",&c);

printf("%c",c);

}
//printf("%s",a_str);
fclose(p);
return(0);
}