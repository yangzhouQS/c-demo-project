
#include <stdio.h>

int main() {
    printf("hello Clang\n");

    const double PI = 3.1415926;
    int radius = 10;

    double s = PI * radius * radius;
    double c = 2 * PI * radius;

    printf("�뾶Ϊ%d��Բ���Ϊ%.3f \n", radius, s);
    printf("�뾶Ϊ%d��Բ�ܳ�Ϊ%.3f \n", radius, c);

    return 0;
}