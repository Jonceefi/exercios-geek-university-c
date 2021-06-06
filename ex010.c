#include <stdio.h>

int  main()
{
	float km, ms;
	printf("Digite a velocidade em Km/h: ");
	fflush(stdout);
	scanf("%f",&km);

	ms = km/3.6;
	printf("A velocidade em m/s: %.2f", ms);
	return 0;
}
