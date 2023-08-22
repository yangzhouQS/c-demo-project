
#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159;
    int radius = 100;

    // 表面积
    // double surface_area = 4 * PI * radius * radius;
    double surface_area = 4 * PI * pow(radius, 2);

    // 体积
    // double volume = (4.0 / 3) * PI * radius * radius * radius;
    double volume = (4.0 / 3) * PI * pow(radius, 3);

    // 最少占15个字符
    printf("%15.4f : surface_area  \n%15.4f : volume \n", surface_area, volume);

    printf("---------------------------------\n");
    // 左对齐
    printf("%-15.4f : surface_area  \n%-15.4f : volume \n", surface_area, volume);


    // 圆柱表面积

    printf("hello \n");
    return 0;
}