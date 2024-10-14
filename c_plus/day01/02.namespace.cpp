#include <iostream>

using namespace std;
namespace Maker {
    int a = 10;
    int b = 100;

    void test() {
        cout << "hello Marker.test" << endl;
    }
}

namespace Print {
    int a = 10;
    int b = 100;

    void test() {
        cout << "hello Print.test" << " a = " << a << endl;
        cout << "hello Print.test" << " b = " << b << endl;
    }
}

int main() {
    cout << "123" << endl;
    Print::test();
    cout << "Maker::a + Print::b = " << Maker::a + Print::b << endl;
    return 0;
}