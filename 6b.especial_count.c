#include <stdio.h>

main()
{
	int character, tabs, spaces, lines;

	tabs = 0;
	spaces = 0;
	lines = 0;

	while ((character = getchar()) != EOF){
		if (character =='\t')
			++tabs;
		if (character == ' ')
			++spaces;
		if (character == '\n')
			++lines;
	}
	printf("Hay %d tabuladores, %d espacios, %d líneas\n",tabs, spaces, lines);
}