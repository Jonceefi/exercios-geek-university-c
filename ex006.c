#include <stdio.h>

int  main()
{
	float c, f;
	printf("Digite a temperatura em celsius: ");
	fflush(stdout);
	scanf("%f", &c);
	f = (c * 1.8 + 32);
	printf("O valor eh em fahrenheit é %f: ",f);
	return 0;
}
