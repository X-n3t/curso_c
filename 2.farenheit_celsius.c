#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahr\tcelsius\n");

	while (fahr <= upper){
		celsius = 5 * (fahr-32)/9;
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}