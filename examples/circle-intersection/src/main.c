#include "app.h"

#define SQR(x) ((x) * (x))

#define CIRCLE_IN(x,y,R) (SQR(x) + SQR(y) <= SQR(R))

int main()
{
	//x^2 + y^2 <= 1
	//(x+1)^2 + y^2 <= 1
	//(x-1)^2 + y^2 <= 1 && x^2 + y^2 <= 1

	double x, y;

	printf("Enter x and y coordinates: ");

	int ret =scanf("%lf %lf", &x, &y);

	if (ret != 2)
	{
		printf("Invalid input\n");
		return 1;
	}

	/*if (SQR(x) + SQR(y) <= 1.0 && SQR(x + 1.0) + SQR(y) <= 1.0)
	{
		printf("Point (%.2lf, %.2lf) is inside the intersection of circles\n", x, y);
	}
	else
	{
		printf("Point (%.2lf, %.2lf) is outside the intersection of circles\n", x, y);
	}*/

	if (CIRCLE_IN(x, y, 1.0) && CIRCLE_IN(x + 1.0, y, 1.0))
	{
		printf("Point (%.2lf, %.2lf) is inside the intersection of circles\n", x, y);
	}
	else
	{
		printf("Point (%.2lf, %.2lf) is outside the intersection of circles\n", x, y);
	}

    return 0;
}