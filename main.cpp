#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 3;
    float b = 4.576566;
    float r = a + b;
    float r2 = a - b;
    printf("a + b = %i + %f = %f\n", a, b, r);
    printf("a + b = %i + %.2f = %.2f\n", a, b, r);
    printf("a + b = %i + %.2f = %.2f\n", a, -b, r2);

    return 0;
}
