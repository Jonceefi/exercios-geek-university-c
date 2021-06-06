#include <stdio.h>

int main()
{
	float c,k;
	printf("Digite a temperatura em Kelvin: ");
	fflush(stdout);
	scanf("%f", &k);

	c = k - 273.15;

	printf("A temperatura em celsius: %.2f", c);
	return 0;
}
