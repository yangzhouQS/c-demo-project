#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Human {
private:
    string name;
    int age;
    string gender;

public:
    // 构造函数
    Human() {
        cout << "Human constructor" << endl;
    }

    // 重载构造函数
    Human(string name, int age, string gender) {
        cout << "Human constructor" << endl;
        this->name = name;
        this->age = age;
        this->gender = gender;
    }

    // 析构函数
    ~Human() {
        cout << "Human destructor" << endl;
    }

    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }

    void toString() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

class MyString {
private:
    char *buffer;
public:
    MyString(const char *str) {
        buffer = NULL;
        if (str != NULL) {
            buffer = new char[strlen(str) + 1];
            strcpy(buffer, str);

            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int *) buffer << endl;
        }
    }

    // 拷贝构造函数
    MyString(const MyString &copySource) {
        buffer = NULL;
        cout << "Copy constructor" << endl;
        if (copySource.buffer != NULL) {
            buffer = new char[strlen(copySource.buffer) + 1];
            strcpy(buffer, copySource.buffer);

            cout << "buffer points to: 0x" << hex;
            cout << (unsigned int *) buffer << endl;
        }


    }

    ~MyString() {
        /*if (buffer != NULL) {
            delete[] buffer;
            buffer = NULL;
        }*/
        delete[] buffer;
    }

    int GetLength() {
        return strlen(buffer);
    }

    const char *GetString() {
        return buffer;
    }
};

void UseMMyString(MyString s1) {
    cout << s1.GetLength() << endl;
    cout << s1.GetString() << endl;
    return;
}

int main() {
    Human h1 = Human("李四", 18, "男");
    h1.toString();

    MyString s1("Hello");
    // cout << s1.GetLength() << endl;
    // cout << s1.GetString() << endl;
    UseMMyString(s1);
    return 0;
}