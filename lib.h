#ifndef LIBATIVIDADE1
#include <stdio.h>
#include <stdlib.h>
#define MAX 30
typedef struct Registro{
	char sobrenome[MAX];
	char nome[MAX];
	char endereco[MAX];
	char cidade[MAX];
    char estado[MAX];
	char cep[MAX];
}Registro;

int inserirRegistro( Registro *r, char *arquivo);
void lerRegistros(char *arquivo);
#endif

