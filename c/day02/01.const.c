#include <stdio.h>
#include <math.h>
// PI����
#define PI  3.1415926;

int main() {

    int r = 10;
    // float s = r * r * PI;
    float s2 = pow(r, 2) * PI;
    float l = 2 * r * PI;
    printf("�뾶Ϊ %d ��Բ�����Ϊ %.2f���ܳ�Ϊ%.3f \n", r, s2, l);

    printf("����ѧϰ\n");

    return 0;
}

