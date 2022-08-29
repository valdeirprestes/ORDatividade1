Atividade 1 - UEM - ORD(Organização e recuperação de dados
Programa 1
*Implemente o pseudocódigo escreve_campos utilizando a
linguagem C
*O programa escreve_campos lê dados de pessoas
repetidamente até que se digite um sobrenome “vazio”
*Para cada pessoa lida, os seus dados são gravados no arquivo
como uma sequência de campos de tamanho variável
delimitados por “|”
–
–
–
–
–
–
Sobrenome
Nome
Endereço
Cidade
Estado
CEP


****************Arquivo********************
Silva|Alan|Rua Tiete 123|Maringa|PR|87100|
Flores|Andre|Rua Braga 34|Sarandi|PR|87111|
…




**********Pseudo escreve_campos************
PROGRAMA: escreve_campos
receba o nome do arquivo na string NOME_ARQ
abra o arquivo NOME_ARQ para escrita com o nome lógico SAIDA
receba o sobrenome na string SOBRENOME e calcule o seu COMPRIMENTO
 enquanto COMPRIMENTO > 0 faça
	receba nome, endereço, cidade, estado e cep nas strings NOME,
	ENDERECO, CIDADE, ESTADO e CEP, respectivamente
	escreva a string SOBRENOME no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	escreva a string NOME no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	escreva a string ENDERECO no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	escreva a string CIDADE no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	escreva a string ESTADO no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	escreva a string CEP no arquivo SAIDA
	escreva “|” no arquivo SAIDA
	receba o próximo sobrenome na string SOBRENOME e calcule o
	COMPRIMENTO
	
 fim /* enquanto */
 feche SAIDA
fim PROGRAMA
