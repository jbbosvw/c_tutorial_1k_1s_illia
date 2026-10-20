#include "app.h"

int main()
{
    // 0, 1, 2,..9, base=10
    int a = 1829;
    //1000 + 800 + 20 + 9 = 1*10^3 + 8*10^2+2*10^1+9*10^0
   //{0, 1}, base=2 

    short s1 = 32767;

    s1 = s1 + 1;
    printf("s1 + 1=%d\n", s1);

    char c1 = 255;

    c1 = c1 + 1;

    printf("c1 + 1=%d\n", c1);
    return 0;
}