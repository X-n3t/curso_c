#include <stdio.h>

main()
{
	int character, space_count, other_count, iterator;
	int ndigit[10];

	space_count = other_count = 0;
	/* Inicializamos nuestro array con todos los valores a cero */
	for (iterator = 0; iterator < 10; ++iterator)
		ndigit[iterator] = 0;
	
	while ((character = getchar()) != EOF) {
		if (character >= '0' && character <= '9')
			++ndigit[character-'0'];
		else if (character == ' ' || character == '\n' || character == '\t' )
			++space_count;
		else
			++other_count;
	}
	printf("Digitos\n");
	for (iterator = 0; iterator < 10; ++iterator){
		printf(" digito %d - %d veces\n", iterator, ndigit[iterator]);
	}
	printf("Espacios en blanco: %d\n", space_count);
	printf("Otros caracteres: %d\n", other_count);
}