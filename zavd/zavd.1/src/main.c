//Розв'язок Індив. Завд. 1
// 
// f(x) = pi^2 / 8 - pi*|x| /4
//pi/5 <= x <= pi, N = 5
//S = sum cos*((2n-1)*x) / (2n-1)^2 
//
//x=1
//a1 = cos(1)/1 = 0,5403
//a2 = cos(3)/9 = -0,1100
//a3 = cos(5)/25 = 0,0113
//a4 = cos(7)/49 = 0,0154
//a5 = cos(9)/81 = -0,0112
//S = 0, 5403 - 0, 1100 + 0, 0113 + 0, 0154 - 0, 0112 = 0,4458
//f(1) = 9, 8696 / 8 - 3, 1416 * |1| / 4 = 1, 2337 - 0, 7854 = 0,4483
//|S - f| = |0,4458 - 0,4483| = 0,0025
#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main()
{
	double x = 1.0, S = 0.0;
	int N = 5;

	for (int n = 1; n <= N; n++)
	{
		S += cos((2.0 * n - 1.0) * x) / ((2.0 * n - 1.0) * (2.0 * n - 1.0));
	}
	double exact = pi * pi / 8 - pi * fabs(x) / 4;
	printf("S = %f\n", S);
	printf("f = %f\n", exact);
	printf("diff = %f\n", fabs(S - exact));

	return 0;
}
