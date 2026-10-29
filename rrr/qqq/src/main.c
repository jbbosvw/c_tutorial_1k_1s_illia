#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	printf("Enter sides a, b, c: ");
	scanf("%lf %lf %lf", &a,&b,&c);

	if (a < b + c && b < a + c && c < a + b)
	{
		double p = (a + b + c) / 2;
		double S = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Square is : %g\n", S);
	}
	else
	{
		printf("Triangle is not exist\n");

	}

	return 0;
}
