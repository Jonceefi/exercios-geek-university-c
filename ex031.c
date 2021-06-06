//Aula sobre variáveis
#include <stdio.h>

int main ()
{
	int idade;
	printf("Qual a sua idade ?\n");
	fflush(stdout);
	scanf("%d", &idade);

	printf("A sua idade é %d\n", idade);

	return 0;
}
