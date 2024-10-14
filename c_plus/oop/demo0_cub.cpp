#include <iostream>
#include <string>

using namespace std;

class Cub {
private:
    int mL;
    int mW;
    int mH;
public:
    // 构造函数
    Cub(int l, int w, int h) {
        mL = l;
        mW = w;
        mH = h;
    }

    // 计算体积
    int volume() {
        return mL * mW * mH;
    }

    // 计算面积
    int area() {
        return 2 * (mL * mW + mL * mH + mW * mH);
    }

    // 设置长
    void setL(int l) {
        mL = l;
    }

    // 设置宽
    void setW(int w) {
        mW = w;
    }

    // 设置高
    void setH(int h) {
        mH = h;
    }
};

int main() {
    Cub cub = *new Cub(10, 20, 30);;
    cub.setL(20);
    cub.setH(20);
    cout << "体积：" << cub.volume() << endl;

    cout << "面积：" << cub.area() << endl;
}
