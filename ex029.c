#include <stdio.h>

int main()
{
	float a,b,c;
	printf("\nDigite o primero valor: ");
	fflush(stdout);
	scanf("%f", &a);
	printf("Digite o segundo valor: \n");
	fflush(stdout);
	scanf("%f", &b);
	printf("Digite o terceiro valor: \n");
	fflush(stdout);
	scanf("%f", &c);

	a = (a*a) + (a*a);
	b = (b*b) + (b*b);
	c = (c*c) + (c*c);

	printf("Soma dos quadadros:");
	printf("\nPrimeiro valor %.2f\n",a);
	printf("\nPrimeiro valor %.2f\n",b);
	printf("\nPrimeiro valor %.2f\n",c);
	return 0;
}
