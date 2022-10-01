#include <stdio.h>
#include <string.h>  // manipular string e vetores
#include <ctype.h>   // manipular caracteres individualmente (ASCII)

int main() {
	int i;
	char *pc; // ponteiro para char
	int v[] = {1, 2, 3}; //vetor de 3 posicoes
	// string em C é um vetor de char e um terminador
	char s1[] = {'O', 'l', 'a', '\0'}; // exemplo do ocorre na prática
	char s2[] = "Ola"; // atribuicao APENAS na inicializacao
	char s3[] = "Agosto e Setembro choveu o tempo todo!";	
	
	printf ("%s tem tamanho: %d e comprimento: %d \n", s1, sizeof(s1), strlen(s1));
	printf ("%s tem tamanho: %d e comprimento: %d \n", s2, sizeof(s2), strlen(s2));
	printf ("%s tem tamanho: %d e comprimento: %d \n", s3, sizeof(s3), strlen(s3));
	
	s2[0] = 'X'; // string, como e vetor de char, permite acesso individual
	printf("%s %d - %c\n", s1, s1[0], s1[0]);
	printf("%s %d - %c\n", s2, s2[0], s2[0]);

	// loop 1, usando contador e final com '\0'
	i = 0;             
	while (s3[i]) { // sair quando chegar no final, ou seja, quando encontrar o '\0' que vale falsidade
		printf("%c (ASCII: %d)\n", s3[i], s3[i]);
		i++;
	}
	
	// loop 2, usando pontero e final com '\0'
	pc = &s3[0]; // pc = s3; pc está apontando para primeiro char, 'A'
	while (*pc) { // vai sair quando *pc apontar para o '\0'
		printf("%c_", *pc);
		pc++;
	}
	printf("\nEm maiusculo: ");
	// loop 3, usando for com comprimento da string, acessando como vetor
	for (i=0; i < strlen(s3); i++){
		printf("%c", toupper(s3[i]));
	}
	return 0;
}


