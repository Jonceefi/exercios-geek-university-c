#include <stdio.h>

int main()
{
	float f,c;
	printf("Digite o valor em Fahrenheit: ");
	fflush(stdout);
	scanf("%f", &f);

	c = 5 * (f -32) / 9;

	printf("A temperetura em Celsius é aproximadamente: %.2f", c);
	return 0;
}
