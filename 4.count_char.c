#include <stdio.h>
/*Cuenta los caracteres de entrada */
main()
{
	int count,character;
	count = 0;
	character = getchar();

	while (character != EOF){
		++count;
		character = getchar();
	}
	printf("Hay %d caracteres\n", count);
}