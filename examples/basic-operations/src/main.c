#include "app.h"

int main()
{
    int a = 1829;
    int b = 899;

    int r = a + b;

    printf("a + b=%d\n", r);

    r = a - b;

    printf("a - b=%d\n", r);

    r = a * b;

    printf("a * b=%d\n", r);

    r = a / b;

    printf("a / b=%d\n", r);

    r = a % b;

    printf("a %% b=%d\n", r);

    /*
    135/14=9
    135-126=11
   
    */

    srand(time(NULL));

    int attempt = rand() % 6 + 1;
    
    printf("Attempt %d\n", attempt);

	double f = log10(1002) + log(11);
    
    printf("f = %f\n", f);

    return 0;
}