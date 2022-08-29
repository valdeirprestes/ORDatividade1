#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"
#define TAM 30


/* o ultimo item do menu eh sempre "Sair"*/
char strMenu[][TAM]={
	"Listar dados",
	"Inserir dados",
	"Sair" 
};
char arqconf[] = "lista.txt";

int input(char strRetorno[], int itam){
	int index;
	int c;
	index = 0;
	while( (c=getc(stdin))!='\n' && index < itam){
		strRetorno[index]=c;
		index = index + 1;
		}
	strRetorno[index]='\0';
	return (index > 0 ); /* retorna 1 para inseriu dados e  0 para não inseriu */
}
int inputNumber(int *number){
	char buffer[TAM];
	int teste;
	teste=input(buffer, TAM);
	if(teste){
		sscanf(buffer, "%d", number);
	}
	return teste;
}

int inputWord(char *strWord){
	int teste;
	teste=input(strWord, TAM);
	return teste;
}

int menu(){
	int itam;
	int icontar;
	int iopcao;
	
	itam = sizeof(strMenu) / TAM;
	icontar = 0 ;
	printf("Menu:\n\n");
	while(icontar < itam){
		icontar += 1;
		printf(" %d - %s\n", icontar, strMenu[icontar-1]);
	}
	printf("Selecione uma opcao do menu:");
	inputNumber(&iopcao);
	return iopcao;
}

void inserir(){
	Registro tmp;
	
	printf("Entre com o nome:");
	inputWord(tmp.nome);
	printf("Entre com o sobrenome:");
	inputWord(tmp.sobrenome);
	printf("Entre com o endereco:");
	inputWord(tmp.endereco);
	printf("Entre com o cidade:");
	inputWord(tmp.cidade);
	printf("Entre com o estado:");
	inputWord(tmp.estado);
	printf("Entre com o cep:");
	inputWord(tmp.cep);
	if(!inserirRegistro(&tmp, arqconf)){
		printf("Nao conseguiu inserir o registro\n");
	}
	
}

void executa_opcao(int iopcao){
	
	printf("\n\nFoi escolhida a  opcao %d\n", iopcao);
	switch(iopcao){
		case 1:
			printf("\n\nListando\n");
			lerRegistros(arqconf);
			break;
		case 2:
			inserir();
			break;
		case 3:
			printf("Saindo..\n");
			break;
		default:
			printf("Opcao desconhecida!\n");
	}
	
}

int main(int argc, char *arqv[]){
	int resposta;
	int sair= sizeof(strMenu) / TAM;
	do{
		resposta = menu();
		executa_opcao(resposta);
	}while(resposta != sair);
	
}
