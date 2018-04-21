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

A função system() da stdlib.h é fácil de ser utilizada, mas bloqueia a execução do programa e apresenta problemas de segurança.

(b) fork() e exec()?

O uso de fork() e exec() é muito mais complexo e exige a escolha certa da função da família exec() caso os processos a serem lançados precisem de argumentos.

É possível utilizar o exec() sem executar o fork() antes?

Sim. O programa em execução (processo) será substituído pelo código chamado pelo exec() e não retornará nada ao término da execução a não ser em caso de erro.

Quais são as características básicas das seguintes funções:

(a) execp()?

http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/unistd.h.html

(b) execv()?

int execv(const char *path, char *const argv[]);
A lista de argumentos é passada como um vetor de ponteiros.

(c) exece()?

http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/unistd.h.html

(d) execvp()?

int execvp(const char *file, char *const argv[]);
Recebe argumentos como vetor de ponteiros e aceita caminhos relativos, pois procura no PATH.

(e) execve()?

int execve(const char *filename, char *const argv[], char *const envp[]);
Recebe o programa a executar, que pode ser um binário ou um script; o vetor de argumentos e o vetor de configurações para o ambiente do programa.

(f) execle()?

int execle(const char *path, const char *arg, ..., (char *) NULL,
char * const envp[]);

Recebe o caminho do programa a executar, os argumentos como uma lista e o vetor para variáveis de ambiente.