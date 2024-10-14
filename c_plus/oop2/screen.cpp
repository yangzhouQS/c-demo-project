#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Screen {
    // 数据成员
    /**
     *  _Screen 指向一个长度为 _height * _width 的字符串;
     *  _cursor 指向屏幕当前位置
     *  _height 和 _width 指向行数和列数
     */
    string _screen; // string(_heigth * _width)
    string::size_type _cursor; // 当前屏幕位置
    short _height; // 行数
    short _width; // 列数
};

/**
 * 类的数据成员可以是任意类型
 */
class StackScreen {
    int topStack;

    void (*handler)();

    vector<Screen> stack;

//     公有成员
public:
//     私有成员
private:
//     被保护成员
protected:
};

class Person {
public:
    string _name;
    string _address;

    Person(const string &name, const string &address) {
        this->_name = name;
        this->_address = address;
    }

    const string &getName() const {
        return _name;
    }

    const string &getAddress() const {
        return _address;
    }


};

void testFn(int a, int b, int *result) {
    *result = a * b;
}

int main() {
    cout << "name = " << "hello" << endl;
    int result = 0;
    testFn(3,5,&result);
    cout << "result = " << result << endl;
    return 0;
}
