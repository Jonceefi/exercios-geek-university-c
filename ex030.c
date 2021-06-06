#include <stdio.h>

int main()
{
	float a, r;
	printf("Digite um numero: ");
	fflush(stdout);
	scanf("%f", &a);
	r = a/5;
	printf("A quinta parte dele é: %f", r);
	return 0;
}
