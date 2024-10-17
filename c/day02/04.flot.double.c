
#include <stdio.h>

int main() {
    printf("int   sizeof = %d \n", sizeof(int)); // 4
    printf("flot   sizeof = %d \n", sizeof(float)); // 4
    printf("double sizeof = %d \n", sizeof(double)); // 8
    printf("long double sizeof = %d \n", sizeof(long double)); // 16


    float a = 3141.23456789;
    printf("a = %.10f \n", a);
    printf("a = %d \n", (int)a);

    double b = 3141.23456789;
    printf("b = %.10f \n", b);
    printf("b = %d \n", ((int)b));


    long double c = 3141.23456789L;
    printf("c = %.10Lf \n", c);
    printf("c = %d \n", ((int)c));

    return 0;
}