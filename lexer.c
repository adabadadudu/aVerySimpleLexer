// the compiler creating book , grade 1 quiz 10 - at page:34

#include <stdio.h>
#include <string.h>

// following constants hold the address of token in tokens array
#define PLUS 0
#define MINUS 1
#define DIV 2
#define MULTIPLY 3
#define _A 4
#define _B 5
#define _C 6
#define _D 7
#define WHITE_SPACE 8
#define EQ 9

auto char tokens[10] = {'+','-','/','*','A','B','C','D',' ','='};

struct Token {
	int tok_type;
};

int main(){
	struct Token *token;
	char code[] = "A = 2\nB = 3\nC = A+B\nB = 2\nA= B*C";

	// variables
	int a; // hold value of A variable
	int b; // hold value of B variable
	int c;
	int d;

	char operand;

	char *tok = strtok(code,"\n");
	while(tok != NULL){
		// lexical
		for(int i=0;i > strlen(tok);++i){
			if(tok[i] == tokens[PLUS])
				(*token).tok_type = PLUS;
			else if(tok[i] == tokens[MINUS])
				token->tok_type = MINUS;
			else if(tok[i] == tokens[DIV])
				token->tok_type = DIV;
			else if(tok[i] == tokens[MULTIPLY])
				(*token).tok_type = MULTIPLY;
			else if(tok[i] == tokens[_A])
				token->tok_type = _A;
			else if(tok[i] == tokens[_B])
				token->tok_type = _B;
			else if(tok[i] == tokens[_C])
				token->tok_type = _C;
			else if(tok[i] == tokens[_D])
				token->tok_type = _D;
			else if(tok[i] == tokens[EQ])
				token->tok_type = EQ;
			else if(tok[i] == tokens[WHITE_SPACE])
				continue;
			else {
				char str[] = "unsupported character %c";
				sprintf(str, tok[i]);
				perror(str);
			}
			
		}
		// syntax

		// semantic


		tok = strtok(NULL,"\n");
	}
}
