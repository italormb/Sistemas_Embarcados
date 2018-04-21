1. Considerando a biblioteca-padrão da linguagem C, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
	
	FILE *fp = fopen(char *caminho, char *modo);

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
	
	int fprintf(FILE *fp, const char *formato, ...);
	int fputc(int c, FILE *fp);
	int fputs(const char *s, FILE *fp);
	size_t fwrite(const void *ptr, size_t nbytes, size_t qtd, FILE *fp);

(c) Quais são as funções (e seus protótipos) para ler arquivos?
	
	int fscanf ( FILE *fp, char *formato, ... );
	size_t fread(void *ptr, size_t nbytes, size_t qtd, FILE *fp);
	int fgetc(FILE *fp);
	int getc(FILE *fp;
	char *fgets(char *s, int nbytes, FILE *fp);

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
	
	int fseek (FILE *fp, long int offset, int origin);
	void rewind (FILE *fp);
	int fsetpos(FILE *fp, const fpos_t *pos);

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?
	
	#include <stdio.h>

2. O que é a norma POSIX?


3. Considerando a norma POSIX, responda:

(a) Quais são as funções (e seus protótipos) para abrir e fechar arquivos?
	
	int open(const char *pathname, int flags, mode_t mode);

(b) Quais são as funções (e seus protótipos) para escrever em arquivos?
	
	ssize_t write(int fd, const void *buf, size_t count);

(c) Quais são as funções (e seus protótipos) para ler arquivos?
	
    ssize_t read(int fd, void *buf, size_t count);

(d) Quais são as funções (e seus protótipos) para reposicionar um ponteiro para arquivo?
	
	off_t lseek(int fd, off_t offset, int whence);

(e) Quais bibliotecas devem ser incluídas no código para poder utilizar as funções acima?7
	
	#include <sys/types.h>
	#include <sys/stat.h>
	#include <fcntl.h>
	#include <unistd.h>