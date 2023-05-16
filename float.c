
#include <stdio.h>

int main(int argc, char *arg[])
{
	float a = 0.1;
	float b = 0.2;
	double c = 0.1;
	double d = 0.2;

	printf("%.17f\n", a + b);
	printf("%.17f\n", c + d);

	return 0;
}

