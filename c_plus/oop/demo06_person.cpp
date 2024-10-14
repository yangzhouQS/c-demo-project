#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int age;

protected:
public:

    // 无参构造
    Person() {
        cout << "Person()" << endl;
        this->age = 0;
    }

    // 带参构造
    Person(int age) {
        cout << "Person(int age)" << endl;
        this->age = age;
    }

    // 拷贝构造
    Person(const Person &person) {
        cout << "Person(const Person &person)" << endl;
        this->age = person.age;
    }

    ~Person() {
        cout << "~Person()" << endl;
    }

    int getAge() {
        return this->age;
    }

    void setAge(int age) {
        this->age = age;
    }

    void showAge() {
        cout << "age is " << this->age << endl;
    }


};

/**
 * @brief 主函数
 *
 * 该函数是程序的入口点，用于演示Person类的构造函数调用顺序和对象操作。
 *
 * @return 返回值为整数，表示程序执行结果。
 */
int main() {
    // 构造函数的调用顺序
    cout << "--------------person1" << endl;
    Person person1;
    person1.showAge();

    // 有参数的构造函数
    cout << "--------------person2" << endl;
    Person person2(10);
    person2.setAge(20);
    person2.showAge();

    // 拷贝构造函数
    cout << "--------------person3" << endl;
    Person person3(person2);
    person3.showAge();
    person3.setAge(33);
    person3.showAge();
    person2.showAge();

    cout << "--------------person4" << endl;
    //第三种 =号法 隐式转换
    Person person4 = 44;
    person4.showAge();

    cout << "--------------person5" << endl;
    // 调用拷贝构造函数
    Person person5 = person3;
    person5.setAge(40);
    person3.showAge();
    person5.showAge();


    return 0;
}