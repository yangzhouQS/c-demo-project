#include <iostream>
#include <string>
using namespace std;


void myFunc() {
    cout << "myFunc('无参数')" << endl;
}

// 函数参数个数不同
void myFunc(int a) {
    cout << "myFunc(int a) = " << a << endl;
}

// 参数类型不同
void myFunc(string a) {
    cout << "myFunc(string a) = " << a << endl;
}

// 参数个数
void myFunc(int a, int b) {
    cout << "myFunc(int a, int b) = " << a + b << endl;
}



int main() {
    myFunc();
    myFunc(10);
    myFunc("hello");
    myFunc(10, 20);
    return 0;
}