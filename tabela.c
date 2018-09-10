#include <stdio.h>
#include <stdlib.h>

typedef struct Op{
	char new_symbol;
	char direction;
	int new_state;
}operation;

operation* Popula_matriz(operation* matriz){

	//q0
	matriz->new_symbol = 'S';
	matriz->direction = '>';
	matriz->new_state = 0;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '>';
	matriz->new_state = 1;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '>';
	matriz->new_state = 2;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '-';
	matriz->new_state = 6;
	//qli0
	matriz++;
	matriz->new_symbol = 'S';
	matriz->direction = '>';
	matriz->new_state = 1;
	matriz++;
	matriz->new_symbol = '0';
	matriz->direction = '>';
	matriz->new_state = 1;
	matriz++;
	matriz->new_symbol = '1';
	matriz->direction = '>';
	matriz->new_state = 1;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '<';
	matriz->new_state = 4;
	//qli1
	matriz++;
	matriz->new_symbol = 'S';
	matriz->direction = '>';
	matriz->new_state = 2;
	matriz++;
	matriz->new_symbol = '0';
	matriz->direction = '>';
	matriz->new_state = 2;
	matriz++;
	matriz->new_symbol = '1';
	matriz->direction = '>';
	matriz->new_state = 2;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '<';
	matriz->new_state = 3;
	//qteste1
	matriz++;
	matriz->new_symbol = 'S';
	matriz->direction = '-';
	matriz->new_state = 3;
	matriz++;
	matriz->new_symbol = '0';
	matriz->direction = '-';
	matriz->new_state = 7;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '<';
	matriz->new_state = 5;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '-';
	matriz->new_state = 6;
	//qteste0
	matriz++;
	matriz->new_symbol = 'S';
	matriz->direction = '-';
	matriz->new_state = 4;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '<';
	matriz->new_state = 5;
	matriz++;
	matriz->new_symbol = '1';
	matriz->direction = '-';
	matriz->new_state = 7;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '-';
	matriz->new_state = 6;
	//qvolta
	matriz++;
	matriz->new_symbol = 'S';
	matriz->direction = '-';
	matriz->new_state = 5;
	matriz++;
	matriz->new_symbol = '0';
	matriz->direction = '<';
	matriz->new_state = 5;
	matriz++;
	matriz->new_symbol = '1';
	matriz->direction = '<';
	matriz->new_state = 5;
	matriz++;
	matriz->new_symbol = '_';
	matriz->direction = '>';
	matriz->new_state = 0;
}
