#include <stdio.h>
#include <math.h>

int main()
{
    double x = 5.22, a = 6.03, b = 10.15;

    double t1 = (x * x + a * a) / (b - x);
    printf("t1: %.3f\n", t1);

    double t2 = log(fabs(t1));
	printf("t2: %.3f\n", t2);

    double result = t2 / (2 * a);
    printf("Result: %.3f\n", result);


    return 0;
}