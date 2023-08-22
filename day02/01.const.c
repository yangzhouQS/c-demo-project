#include <stdio.h>
#include <math.h>
// PI常量
#define PI  3.1415926;

int main() {

    int r = 10;
    // float s = r * r * PI;
    float s2 = pow(r, 2) * PI;
    float l = 2 * r * PI;
    printf("半径为 %d 的圆的面积为 %.2f，周长为%.3f \n", r, s2, l);

    printf("常量学习\n");

    return 0;
}

