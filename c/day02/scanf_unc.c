#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {
    printf("请输入数字: \n");
    int num;

    scanf("%d", &num); // 读取用户输入的数字，并存储到num变量中
    printf("你输入的数字是: %d\n", num);

    return 0;
}