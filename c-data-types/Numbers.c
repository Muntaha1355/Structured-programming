#include <stdio.h>

int main()
{
    // Integer example
    {
        int myNum = 1000;
        printf("%d\n", myNum);
    }

    // Float example
    {
        float myNum = 5.75;
        printf("%f\n", myNum);
    }

    // Double example
    {
        double myNum = 19.99;
        printf("%lf\n", myNum);
    }

    // Scientific numbers example
    {
        float f1 = 35e3;   // 35 * 10^3 = 35000
        double d1 = 12E4;  // 12 * 10^4 = 120000

        printf("%f\n", f1);
        printf("%lf\n", d1);
    }

    return 0;
}