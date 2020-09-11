/*
Autor: Paula Macedo

Descrição : Escreva um programa que permita ao usuário cadastrar os funcionários de uma empresa usando a estrutura PESSOA. Seu
programa deve perguntar ao usuário quantos usuários serão cadastrados e alocar memória para um array dinâmico para armazenar
aquela quantidade de estruturas PESSOA. A seguir, leia do teclado os dados dos funcionários, armazenando-os no array.

Incorpore ao seu programa uma função que receba uma PESSOA como parâmetro e retorne a idade que essa pessoa terá no dia 31
de dezembro de 2014.


*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia, mes, ano;
}DATA;

typedef struct{
	char nome[50];
	int rg;
	DATA dataNasc;

}PESSOA;

int calcula_idade(PESSOA  func){

	int idade;

	idade = 2014 - func.dataNasc.ano;
	return idade;
	printf("A idade do funcionário em 31 de 2014 será %d", idade);

}
int main(){

	PESSOA*  func;
	int numFunc, i, idade;

	puts("Quantos funcionários serão cadastrados?");
	scanf("%d", numFunc);
	
	func = (PESSOA*)malloc(numFunc*sizeof(PESSOA));
	if(!func){
		printf("ERRO, não há memória");
		return 1;
	}

	for(i=0; i<numFunc; i++){

		puts("Entre com o nome do funcionário");
		gets(func.nome);

		puts("RG");
		scanf("%d", func.rg);
		puts("data de nascimento");
		scanf("%d %d %d", func.dataNasc.dia, func.dataNasc.mes, func.dataNasc.ano );
		idade = calcula_idade(func);
}
		
  	return 0;
}
