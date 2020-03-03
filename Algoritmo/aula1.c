#include <stdio.h>
#include <stdlib.h>


main(){
	
	int numero;
	float valor;
	char *nome;
	nome = malloc(7 * sizeof (char));
	numero = 3;
	valor = 3.21;
	nome =  "Edimar";
	printf("O valor e : %d\n", numero);

	printf("digite um valor interiro: \n");
	scanf("%d", &numero);
	printf("O valor e : %d", numero);


}

