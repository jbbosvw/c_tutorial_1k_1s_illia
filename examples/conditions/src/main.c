#include "app.h"

enum LIGHT { OFF=3, ON };

int main()
{
	int min = -100, max = 200;

	printf("Random numbers between %d and %d:\n", min, max);

	int i;
	
	scanf("%d", &i);

	if (i >= min && i <= max)
	{
		printf("i=%d in range [%d and %d]\n", i, min, max);
	}
	else
	{
		printf("i=%d is out of range [%d and %d]\n", i, min, max);
	}
	//int a, b, c;

	//printf("Enter three integers: ");

	//int ret = scanf("%d %d %d", &a, &b, &c);

	//if (ret != 3)
	//{
	//	printf("Invalid input\n");
	//	return 1;
	//}

	/*
	* +, -, *, /, %
	* ==, !=, >, <, >=, <=`
	*/

	/*
	* !, &&, ||
	*/

	// 0 = false, anything else = true

	//int max;

	//if (a > b)
	//{
	//	max = a;
	//}
	//else
	//{
	//	max = b;
	//}

	//if (c > max)
	//{
	//	max = c;
	//}


	//int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

	//printf("max=%d\n", max);

	enum LIGHT light = ON;

	switch (light)
	{
	case ON:
		printf("Light is on\n");
		break;
	case OFF:
		printf("Light is off\n");
		break;
	}


    return 0;
}