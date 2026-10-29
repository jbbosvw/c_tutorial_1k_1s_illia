//////#include <stdio.h>
//////#include <math.h>
//////
//////int main()
//////{
//////	double a, b, c;
//////	printf("Enter sides a, b, c: ");
//////	scanf("%lf %lf %lf", &a,&b,&c);
//////
//////	if (a < b + c && b < a + c && c < a + b)
//////	{
//////		double p = (a + b + c) / 2;
//////		double S = sqrt(p * (p - a) * (p - b) * (p - c));
//////		printf("Square is : %g\n", S);
//////	}
//////	else
//////	{
//////		printf("Triangle is not exist\n");
//////
//////	}
//////
//////	getchar();
//////	return 0;
//////}
// 1.1
////#include <stdio.h>
////int main()
////{
////	for (int i = 1;i <= 10; i+=1)
////	{
////		printf("%d\n", i);
////	}
////	return 0;
////}
// 1.2
//#include <stdio.h>
//int main()
//{
//	int N = 8;
//	int S = 2;
//	for (int i = 1;i <= N;i++)
//	{
//		S+=i;
//	}
//	printf("Sum=%d\n", S);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int N = 1000;
//	double S = 2.0;
//	for (int i = 1; i <= N; i++)
//	{
//		S += 1.0 / (i * i);
//	}
//	printf("Sum = %f\n", S);
//	return 0;	
//}



