#include <iostream>
#include <string>

using namespace std;

class Person {
    string name;
    int age;
private:
    char *pName;
public:

    // 有参构造函数
    Person(string name, int age) {
        this->name = name;
        this->age = age;

        // pName = (char *) malloc(strlen(name) + 1);

        this->pName = new char[name.length() + 1];
        // strcpy(pName, name);
    }

    void printInfo() {
        // cout << "Name: " << name << ", Age: " << age << endl;
        cout << "pName: " << pName << ", Age: " << age << endl;
    }

    ~Person() {
        cout << "Person Destructor" << endl;
    }
};

int main() {
    Person p1 = *new Person("Jack 哈哈", 20);
    p1.printInfo();
    return 0;
}