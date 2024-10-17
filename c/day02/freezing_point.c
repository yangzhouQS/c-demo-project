# include <stdio.h>


// 华氏度转摄氏度
int main() {

    float fahrenheit;
    printf("请输入华氏度: \n");
    scanf("%f", &fahrenheit);

    printf("对应的摄氏度为:%2f\n", (5.0 / 9.0) * (fahrenheit - 32));

    return 0;
}