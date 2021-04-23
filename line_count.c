#include <stdio.h>

main()
{
	int character, lines;

	lines = 0;

	while((character = getchar()) != EOF)
		if (character == '\n')
			++lines;
	printf("El fichero tiene %d líneas\n",lines);

}