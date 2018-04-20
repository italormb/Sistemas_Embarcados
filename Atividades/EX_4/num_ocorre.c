#include <stdio.h>
#include <stdlib.h>

int main(){
  char string[]="ola ola";
  int i=0,cont=0;

  while(string[i++] != "\0"){
   if((&string[i]=='o') && (&string[i+1]=='l') && (&string[i+2]=='a')){
   	cont++;
   }

  }

  printf("%d\n",cont);
  return 0;

}