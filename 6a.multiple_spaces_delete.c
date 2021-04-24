#include <stdio.h>

main()
{
	int current_char, last_char;


	while ((current_char = getchar()) != EOF){
		if (current_char != ' ' || last_char != current_char)
				putchar(current_char);
		last_char = current_char;
	}
}
