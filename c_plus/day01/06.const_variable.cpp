#include <iostream>

#define MAX 100
using namespace std;
const int A = 100;


void test() {
    int num = 10;
    int num2 = 99;

    // int *pNum = &num;
    // *pNum = 20; // 可以修改


    // const限定的是int类型
    // 常量指针，不能通过引用修改指向的值
    const int *pNum = &num;
    // *pNum = 20; // 不可以修改 error: assignment of read-only location '* pNum'

    // 可以修改指向
    pNum = &num2;

    cout << "*pNum = " << *pNum << endl;

    // 常量指针的第二种写法
    int const *pNum2 = &num;
    // *pNum2 = &num2; // 无法修改的 error: assignment of read-only location '* pNum2'

    // 通过指针变量修改指向
    pNum2 = &num2;
    cout << "*pNum2 = " << *pNum2 << endl;


    // 指针常量
    int *const pNum3 = &num;
    *pNum3 = 11; // 可以修改
    // pNum3 = &num2; // 无法修改 // error: assignment of read-only variable 'pNum3'
    cout << "*pNum3 = " << *pNum3 << endl;

}

// 数组指针
void test2() {
    int arr[5] = {1, 2, 3, 4, 5};
    int (*pArr)[5] = &arr;
    for (int i = 0; i < 5; ++i) {
        cout << (*pArr)[i] << ", ";
    }
    cout << "\n";
}

// 指针数组
void test3() {
    int num1 = 3, num2 = 5, num3 = 8;
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;
    int *arr[3] = {p1, p2, p3};
    for (int i = 0; i < 3; ++i) {
        cout << *arr[i] << ", ";
    }
    cout << "\n";
}

int main() {
    std::cout << "xxxx" << std::endl;

    cout << "MAX = " << MAX << endl;
    cout << "A = " << A << endl;

    test();
    cout << "----------------------\n";
    test2();
    cout << "----------------------\n";
    test3();
    return 0;
}
