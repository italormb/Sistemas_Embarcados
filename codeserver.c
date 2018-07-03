#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 

int main(void)
{     while(1){
      system("./atualizacaoserver.sh"); /*se o usuário tiver digitado 1 o sistema irá reiniciar*/
      sleep(5); //atualizar a cada 5 segundos
      }
}