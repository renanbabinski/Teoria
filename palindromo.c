#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct Op operation;
operation* Popula_matriz(operation* matriz);

typedef struct Op{
	char new_symbol;
	char direction;
	int new_state;
}operation;

int main(){

	operation tabela[6][4];

	Popula_matriz(&tabela[0][0]);

	int i=0,state=0,symbol=0,pont=0;
	char fita[50];

	for(i=0;i<50;i++)
		fita[i] = '_';

	fita[0] = 'S';
	printf("\n\n######     MAQUINA DE TURING    ######\n");
	printf("Digite a cadeia binária e a máquina dirá se é palindromo ou não:\n\n");
	fgets(fita+1,sizeof(fita),stdin);

	for(i=0;i<50;i++)
		if(fita[i] == '\0'||fita[i] == '\n')
			fita[i] = '_';

	while(state != 6 && state != 7){
		system("clear");
		for(i=0;i<50;i++)
			printf("%c",fita[i]);
		printf("\n");
		for(i=0;i<pont;i++)
			printf(" ");
		printf("^");
		printf("\n");

		usleep(500000);
		
		if(fita[pont] == 'S')
			symbol = 0;
		if(fita[pont] == '0')
			symbol = 1;
		if(fita[pont] == '1')
			symbol = 2;
		if(fita[pont] == '_')
			symbol = 3;

		fita[pont] = tabela[state][symbol].new_symbol;

		if(tabela[state][symbol].direction == '>')
			pont++;
		if(tabela[state][symbol].direction == '<')
			pont--;

		state = tabela[state][symbol].new_state;
	}
	if(state == 6){
		printf("\n\nQSIM!!!!\n");
		printf("É PALINDROMO!!!!\n\n\n");
	}else{
		printf("\n\nQNÃO!!!!\n");
		printf("NÃo É PALINDROMO!!!!\n\n\n");
	}

	return 0;
}