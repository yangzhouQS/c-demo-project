#include <iostream>

using namespace std;

#include "externA.c";

extern int num; // 外部引用
extern void print();

void test() {
    cout << "num = " << num << endl;
    print();
}

void test2() {
    cout << "num = " << wd2::num << endl;
    wd2::print();
}

int main() {

    test();
    cout << "\n------------wd2命名空间下的函数调用\n" << endl;
    test2();

    return 0;
}