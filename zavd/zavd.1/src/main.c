//////Розв'язок Індив. Завд. 1
////// 
////// f(x) = pi^2 / 8 - pi*|x| /4
//////pi/5 <= x <= pi, N = 5
//////S = sum cos*((2n-1)*x) / (2n-1)^2 
//////
//////x=1
//////a1 = cos(1)/1 = 0,5403
//////a2 = cos(3)/9 = -0,1100
//////a3 = cos(5)/25 = 0,0113
//////a4 = cos(7)/49 = 0,0154
//////a5 = cos(9)/81 = -0,0112
//////S = 0, 5403 - 0, 1100 + 0, 0113 + 0, 0154 - 0, 0112 = 0,4458
//////f(1) = 9, 8696 / 8 - 3, 1416 * |1| / 4 = 1, 2337 - 0, 7854 = 0,4483
//////|S - f| = |0,4458 - 0,4483| = 0,0025
#include <stdio.h>
#include <math.h>
#define pi 3.14159265358979323846
int main()
{
	double a = pi / 5, b = pi, eps = 0.0001;
	int N = 5, k = 10;
	double h = (b - a) / (k - 1);

	printf("%8s %10s %10s %10s %7s\n", "x", "exact", "S(N=5)", "S(eps)", "terms");

	for (int i = 0; i < k; i++)
	{
		double x =  a + i * h;
		double exact = pi * pi / 8 - pi * fabs(x) / 4;

		double S = 0.0;
		for (int n = 1; n <= N; n++)
		{
			S += cos((2.0 * n - 1.0) * x) / ((2.0 * n - 1.0) * (2.0 * n - 1.0));

		}

		double S2 = 0.0;
		int m = 1;
		while (1.0 / ((2.0 * m - 1.0) * (2.0 * m - 1.0)) >= eps)
		{
			S2 += cos((2.0 * m - 1.0) * x) / ((2.0 * m - 1.0) * (2.0 * m - 1.0));
			m++;
		}

		printf("%8.4f %10.6f %10.6f %10.6f %7d\n", x, exact, S, S2, m - 1);
	}


	return 0;
}

//
//
//
///*
//* Табуляція. 16 варіант
//* y = -3x^2 + x - 1, x<1
//* y = x*sqrt(x) - 1, 1 <= x<4
//* y = |2-x|, x>=4
//* h=0.1 , x in {-5;5}
//* знайти max i min 
//*/
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double a = -5, b = 5, h = 0.1;
//	int n = (int)round((b - a) / h);
//
//	double ymax, ymin, xmax, xmin;
//
//	printf("%8s %10s\n", "x", "y");
//
//	for (int i = 0; i <= n; i++)
//	{
//		double x = a + i * h;
//		double y;
//
//		if (x < 1)
//			y = -3 * x * x + x - 1;
//		else if (x < 4)
//			y = x * sqrt(x) - 1;
//		else
//			y = fabs(2 - x);
//
//		printf("%8.2f %10.4f\n", x, y);
//
//		if (i == 0)
//		{
//			ymax = ymin = y;
//			xmax = xmin = x;
//		}
//		else
//		{
//			if (y > ymax) { ymax = y; xmax = x; }
//			if (y < ymin) { ymin = y; xmin = x; }
//		}
//	}
//
//	printf("max y = %.4f at x = %.2f\n", ymax, xmax);
//	printf("min y = %.4f at x = %.2f\n", ymin, xmin);
//
//	return 0;
//}

/*
* Табуляція z. 16 варіант
* z = x^y + y^(x-1)
* hx = 0.2, x in {1,4}
* hy = 0.25, y in {1,5}
* знайти max i min 
*/
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	double xa = 1, xb = 4, hx = 0.2;
//	double ya = 1, yb = 5, hy = 0.25;
//	int nx = (int)round((xb - xa) / hx);
//	int ny = (int)round((yb - ya) / hy);
//	double zmax = -1e9, zmin = 1e9;
//
//	printf("Y\\X");
//	for (int i = 0; i <= nx; i++)
//		printf("%8.2f", xa + i * hx);
//	printf("\n");
//
//	for (int j = 0; j <= ny; j++)
//	{
//		double y = ya + j * hy;
//		printf("%.2f", y);
//		for (int i = 0; i <= nx; i++)
//		{
//			double x = xa + i * hx;
//			double z = pow(x, y) + pow(y, x - 1);
//			printf("\t%8.2f", z);
//			if (z > zmax) zmax = z;
//			if (z < zmin) zmin = z;
//		}
//		printf("\n");
//	}
//
//	printf("max z = %.4f\n", zmax);
//	printf("min z = %.4f\n", zmin);
//	return 0;
//}