#include <stdio.h>

int main() {
    char c = 'A';
    printf("%d\n", sizeof(c));  // 1
    printf("%c\n", c);         // A
    printf("%c\n", '\a');    // \a: 响铃

    return 0;
}