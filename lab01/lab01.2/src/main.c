#include "app.h"

int main()
{
    double x, a, b;

    printf("Enter x, a, b:");

    int ret = scanf("%lf %lf %lf", &x, &a, &b);

    if (ret < 3) {
        printf("Incorrect input parameters. Must be 3");
        return -1;
    }

    double t1 = (x * x + a * a) / (b - x);
    printf("t1: %.3f\n", t1);

    double t2 = log(fabs(t1));
	printf("t2: %.3f\n", t2);

    double result = t2 / (2 * a);
    printf("Result: %.3f\n", result);

    printf("Enter precision (default is %d):", DEFAULT_PRECISION);
    int precision;
    ret = scanf("%d", &precision);

    if (ret < 1 || precision < 1)
    {
        precision = DEFAULT_PRECISION;
    }

    printf("Result (with %d digits): %.*f\n", precision, precision, result);
    return 0;
}