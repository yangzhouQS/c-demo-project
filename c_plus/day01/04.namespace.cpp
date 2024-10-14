#include <iostream>

using namespace std;


namespace wd {
    int a = 100;
    int number = 999;

    void display() {
        cout << "wd::display()" << endl;
    }
} // end of namespace wd

int main() {
    cout << "命名空间测试" << endl;

    cout << "wd命名空间变量输出 a = " << wd::a << " number = " << wd::number << endl;

    wd::display();

    return 0;
}