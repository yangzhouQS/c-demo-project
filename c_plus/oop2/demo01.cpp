
#include <iostream>

using namespace std;

class Human {
private:
    string name;
    int age;
    string gender;
public:
    // 无参构造函数数
    Human() {}

    // 重载有参数的构造函数
    Human(const string &name, int age) : name(name), age(age) {
        this->name = name;
        this->age = age;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Human::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Human::age = age;
    }

    void getInfo() {
        cout << "name: " << this->getName() << "; age:" << this->getAge() << endl;
    }

    // 析构函数
    virtual ~Human() {
        cout << "Human销毁 " << endl;
    }



};

// 构造函数的使用
/**
 * 不允许复制的类
 * 无法限制通过实例化多次
 */
class President1{
private:
    // 不允许复制的类
    President1(const President1&);
    President1& operator = (const President1&);
};

/**
 * 单例类
 */
class President2{
private:
    President2(){};
    President2(const President2);
    const President2& operator = (const President2&);
    string name;
public:
    static President2& GetInstance(){
        static President2 onlyInstance;
        return onlyInstance;
    }
    string GetName(){
        return name;
    }

    void SetName(string InputName){
        name = InputName;
    }
};

int main() {

    // 使用  new 为  Human 对象动态地分配内存
    Human *h1 = new Human("老四", 16);

    // 使用指针运算符（->）访问成员
    cout << "h1->getName() = " << h1->getName() << endl;
    cout << "h1->getAge() = " << h1->getAge() << endl;

    h1->getInfo();
    return 0;
}