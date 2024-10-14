#include <stdio.h>

int main() {
    char ch = 'a';
    printf("sizeof(ch) = %u\n", sizeof(ch));

    printf("ch[%%c] = %c\n", ch); //打印字符
    printf("ch[%%d] = %d\n", ch); //打印‘a’ ASCII的值

    printf("hello char");
    return 0;
}