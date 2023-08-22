#include <stdio.h>

int main() {

    short s = 127;
    int a = 100;

    printf("a = %d \n", a);
    printf("short       sizeof = %llu \n", sizeof(short));
    printf("int         sizeof = %llu \n", sizeof(int));
    printf("long        sizeof = %llu \n", sizeof(long));
    printf("long long   sizeof = %llu \n", sizeof(long long));
    return 0;
}