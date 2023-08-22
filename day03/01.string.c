#include <stdio.h>

int main() {
    char s1[] = "hello word!@@@";
    char s2[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'd', '!'};
    printf("s1 = %s \n", s1);
    printf("s2 = %s \n", s2);

    int a = 10;
    int b = 20;
    int c = 0;
    c = (a > b ? a : b);

    printf("c = %d\n", c);
    return 0;
}
