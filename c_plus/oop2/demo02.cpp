#include <iostream>

using namespace std;

class Human{
private:
    friend void DisplayAge(const Human& person);
    string name;
    int age;

public:
    Human(const string &name, int age) : name(name), age(age) {
        this->name = name;
        this->age = age;
    }

};

void DisplayAge(const Human& person){
    cout << "person.age = " << person.age << endl;
}

int main() {
    Human firstMan("admin",22);
    DisplayAge(firstMan);
    return 0;
}