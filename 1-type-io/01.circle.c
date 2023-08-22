
#include <stdio.h>

int main() {
    printf("hello Clang\n");

    const double PI = 3.1415926;
    int radius = 10;

    double s = PI * radius * radius;
    double c = 2 * PI * radius;

    printf("半径为%d的圆面积为%.3f \n", radius, s);
    printf("半径为%d的圆周长为%.3f \n", radius, c);

    return 0;
}