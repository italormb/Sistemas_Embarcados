1. Como se utiliza o comando `ps` para:
 
 O comando ps no Linux simplesmente nos mostra um instantâneo dos processos em execução atuais.

(a) Mostrar todos os processos rodando na máquina?

	ps -e ou ps -A

(b) Mostrar os processos de um usuário?
	
	ps -u usuario, ps --user usuario ou ps -U usuario

(c) Ordenar todos os processos de acordo com o uso da CPU?

	Para listar todos em ordem crescente de uso, ps -e --sort=pcpu.  
	Para listar todos em ordem decrescente, ps -e --sort=-pcpu.

(d) Mostrar a quanto tempo cada processo está rodando?

--sort=cputime  mostra o tempo em ordem crescente.

De onde vem o nome fork()?

Divisão ou separação de alguma coisa em dois ramos ou braços.
terminei aqui

Quais são as vantagens e desvantagens em utilizar:

(a) system()?
		#include <stdlib.h>
		int system (const char * string)
Esta primitiva executa um comando especificado por string, retornando após o comando ter sido executado. Durante a execução do comando, SIGCHLD será bloqueado e SIGINT e SIGQUIT serão ignorados.

Valor de retorno: O código de retorno do comando. Em caso de erro, retorna 127 se a chamada da primitiva execve() falhar, ou -1 se algum outro erro ocorrer. 

É fácil de ser utilizada, mas bloqueia a execução do programa e apresenta problemas de segurança. E se caso estiver se comunicando onde utilize sinais, pode ser uma boa opção na implementação.

(b) fork() e exec()?

o fork() é mais utilizado para fazer uma cópia do processo atual(criando um processo filho),sendo que oprocesso original continue existindo, já o exec(), que são uma família de funções(execl, execlp, execle, execv, execvp) que permitem o lançamento da execução de um programa externo ao processo. Não existe a criação efetiva, mas simplesmente uma sustituição do processo atual.

É possível utilizar o exec() sem executar o fork() antes?

Sim, pode fazer o que quiser, mas provavelmente não fará sentido(lógica).A recomendação é que o exec seja acompanhado com o fork. Porque o código do processo que chama uma função exec() será sempre destruído, e desta forma, não existe muito sentido em utilizá-la sem que ela esteja associada a uma primitiva fork().

Quais são as características básicas das seguintes funções:

(a) execp()?

Ele executa o programa onde é pesquisado pelo valor usado no caminho da variavel. Os argumentos do novo programa pode ser especificado por uns vetores de strings ou variaveis numéricas da atual string de parametros.

(b) execv()?

-Tipo vetor argumentos

int execv(const char *caminho, char *const argv[]);

A lista de argumentos é passada como um vetor de ponteiros.

(c) exece()?
- variáveis de ambiente

 O último parâmetro desta função é um vetor para strings (char *) que será recebido pelo novo programa no argumento envp contendo variáveis de ambiente pertinentes para sua execução. Para as versões sem a letra “e“, o ambiente é adquirido a partir de uma variável externa (extern char **environ) já declarada na biblioteca unistd.h.

(d) execvp()?
-Tipo vetor argumentos

int execvp(const char *arquivo, char *const argv[]);

Essa função recebe todos os argumentos num array de strings. Os argumentos são como vetor de ponteiros e aceita caminhos relativos, pois procura no caminho.

(e) execve()?

int execve(const char *caminho, const char * argumentos[], const char *envp[] );

-Tipo vetor argumentos

Os argumentos que serão recebidos em argv são passados em um vetor do tipo char* que já contém todas as strings previamente carregadas.
Pode recebe o programa a executar, que pode ser um binário ou um script.

(f) execle()?

-variáveis de ambiente

int execle(const char *caminho, const char * argumento0, … , (char *) 0, const char *envp[] );


Recebe o caminho do programa a executar, os argumentos como uma lista e o vetor para variáveis de ambiente.