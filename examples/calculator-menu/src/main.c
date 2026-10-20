#include "app.h"

int main()
{
	double a, b;

	char operation;

	printf("======Simple calculator======\n");

	printf("Enter a, b:");

	int ret = scanf("%lf %lf", &a, &b);

	if (ret != 2)
	{
		printf("Invalid input\n");
		return -1;
	}

	printf("Available operations\n");
	printf("\tSum  [+]\n");
	printf("\tDiff [-]\n");
	printf("\tMul  [*]\n");
	printf("\tDiv  [/]\n");
	printf("\tPow  [^]\n");
	printf("\tExp  [e]\n");
	printf("\tLog  [l]\n");

	getchar();

	printf("Select operation:\n");

	operation = getchar();

	double result = NAN;

	switch (operation)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
	case '/':
		result = a / b;
	case '^':
		result = pow(a, b);
		break;
	case 'e':
		result = exp(a);
		break;
	case 'l':
		result = log(a);
		break;
	}

	if (!isnan(result))
	{
		printf("Computed: %.5f\n", result);
	} else
	{
		printf("Try again\n");
	}
    return 0;
}