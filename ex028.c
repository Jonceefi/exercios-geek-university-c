#include <stdio.h>

int main()
{
	int x, y, z, soma;

	printf("Digite o primeiro valor:");
	fflush(stdout);
	scanf("%d", &x);
	printf("Digite o segundo valor:");
	fflush(stdout);
	scanf("%d", &y);
	printf("Digite o terceiro valor:");
	fflush(stdout);
	scanf("%d", &z);

	soma = x + y + z;

	printf("O valor da soma dos valores é: %d",soma);
	return 0;
}
