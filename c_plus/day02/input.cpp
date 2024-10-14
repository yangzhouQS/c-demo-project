#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string name;

    cout << "请输入姓名:";
    cin >> name;

    // cout << "\n";

    cout << "请输入年龄:";
    cin >> age;

    cout << "姓名: " << name << "; 年龄: " << age << endl;
    return 0;
}