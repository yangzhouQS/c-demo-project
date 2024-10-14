#include <iostream>

using namespace std;
// 指针参数

/**
 * 指针交换变量位置
 * @param a
 * @param b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "Hello World!" << endl;
    int a = 10;
    int b = 20;
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}