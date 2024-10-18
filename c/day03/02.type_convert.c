#include <stdio.h>

int main() {
    char a = 'a';
    short b = 100;
    int c = 20;

    //隐式类型转换
    printf("a = %c, b = %d\n", a, b);
    printf("a + b = %d, b+c = %d \n", a + b, b + c);


    return 0;
}
