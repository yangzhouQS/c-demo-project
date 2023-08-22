#include <stdio.h>

int main() {

    // 科学计数法
    const double MOL = 6.02e23;

    double quantity = 6.0 / 32 * MOL;

    // 科学计数法输出
    printf("%e \n%e \n", quantity, quantity);

    // 输出有效数字
    printf("%.3e \n%.5g \n", quantity, quantity);
    return 0;
}