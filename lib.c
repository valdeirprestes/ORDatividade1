#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int inserirRegistro( Registro *r, char *arquivo){
		FILE *fp;
		fp = fopen(arquivo, "a");
		if(fp){
			fputs(r->sobrenome,fp);
			fputs("|",fp);
			fputs(r->nome,fp);
			fputs("|",fp);
			fputs(r->endereco,fp);
			fputs("|",fp);
			fputs(r->cidade,fp);
			fputs("|",fp);
			fputs(r->estado,fp);
			fputs("|",fp);
			fputs(r->cep,fp);
			fputs("\n",fp);
			fclose(fp);
			return 0;
		}
	return -1;
}

void lerRegistros(char *arquivo){ /*apenas le o arquivo e sai da rotina*/
	FILE *fp;
	int c;
	fp = fopen(arquivo, "r");
	if(fp){
		while((c=getc(fp))!=EOF)
			putchar(c);
		fclose(fp);
	}
}
