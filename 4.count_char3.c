#include <stdio.h>

main()
{
	long counter;
	for (counter = 0; getchar() != EOF; ++counter)
		;
	printf("Hay %ld número de caracteres\n", counter);		
}