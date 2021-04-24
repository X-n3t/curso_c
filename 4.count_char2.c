#include <stdio.h>
/*Cuenta los caracteres de entrada */
main()
{
	int count;
	
	while (getchar() != EOF){
		++count;
	}
	printf("Hay %d caracteres\n", count);
}