#include<stdio.h>

int main()
{
	float x, y;
	printf("Digite um n�mero: ");
	fflush(stdout);
	scanf("%f", &x);
	y = x * x;
	printf("O quadrado de %.2f",y);
	return 0;
}
