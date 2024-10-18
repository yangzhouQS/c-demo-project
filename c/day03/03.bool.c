#include <stdio.h>

// C语言中的bool类型
int main(){
    // 定义bool类型变量
    _Bool isRunning = 1;
    // 修改bool类型变量
    isRunning = 0;
    // 修改bool类型变量
    isRunning = !isRunning;

    // 打印bool类型变量
    printf("isRunning: %d\n", !!isRunning);
    return 0;
}