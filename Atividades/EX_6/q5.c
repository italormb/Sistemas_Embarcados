#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int v_global = 0; // Variavel global para este exemplo
void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}

int main(){
  pid_t fih1;//DECLARANDO O PID DO FILHO 1
  pid_t fih2;//DECLARANDO O PID DO FILHO 2
  pid_t fih3;//DECLARANDO O PID DO FILHO 3

  fih1 = fork();////CRIANDO O 2º PROCESSO-FILHO
  if(fih1 == 0){
    Incrementa_Variavel_Global(fih1);
  }

  if(fih1 > 0){
    fih2 = fork();//CRIANDO O 2º PROCESSO-FILHO
    if(fih2 == 0){
      sleep(0.2);
      Incrementa_Variavel_Global(fih2);
    }

    if(fih2 > 0){
      fih3= fork();//CRIANDO O 3º PROCESSO-FILHO
      if(fih3 == 0){
        sleep(0.3);
        Incrementa_Variavel_Global(fih3);
      }
      else if(fih1 > 0){
        v_global++;
        printf("ID do processo que executou esta funcao = %d\n", getpid());
        printf("v_global = %d\n", v_global);
      //printf("\nProcesso Pai:\npid:%d\nppid :%d\n",getpid(),getppid());
      }
    }
  }
  return 0;
}