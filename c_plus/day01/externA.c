int num = 100;

void print() {
    cout << "externA print()" << endl;
}

namespace wd2{
        int num = 200;
        void print() {
            cout << "externA wd2 print()" << endl;
        }
}