/**
 * @brief 制造者抽象基类
 *
 * 制造者是一个抽象基类，它定义了一个纯虚函数make()，用于制造产品。
 * 具体制造者需要继承该基类并实现make()函数。
 */
class Maker {
public:
    /**
     * @brief 制造产品
     *
     * 制造者需要实现该函数来制造产品。
     */
    virtual void make() = 0;
};

/**
 * @brief 具体制造者类
 *
 * ConcreteMaker类继承了Maker基类，实现了制造产品的功能。
 */
class ConcreteMaker : public Maker {
public:
    /**
     * @brief 制造产品
     *
     * 实现了制造产品的功能，输出一条消息表示制造完成。
     */
    void make() {
        cout << "ConcreteMaker makes a product." << endl;
    }
};

/**
 * @brief 导演类
 *
 * 导演类用于设置制造者，并调用制造者制造产品。
 */
class Director {
public:
    /**
     * @brief 设置制造者
     *
     * 设置制造者对象，用于后续制造产品。
     *
     * @param maker 制造者对象指针
     */
    void setMaker(Maker* maker) {
        _maker = maker;
    }

    /**
     * @brief 构造产品
     *
     * 调用制造者的make()函数来制造产品。
     */
    void construct() {
        _maker->make();
    }

private:
    /**
     * @brief 制造者对象指针
     *
     * 存储制造者对象的指针，用于后续调用制造者的make()函数。
     */
    Maker* _maker;
};

/**
 * @brief 主函数
 *
 * 程序入口函数，用于演示制造者模式和导演类的使用。
 *
 * @return 返回程序执行状态，0表示成功，非0表示失败
 */
int main() {
    // 创建导演对象
    Director* director = new Director();
    // 创建具体制造者对象
    Maker* maker = new ConcreteMaker();
    // 设置制造者
    director->setMaker(maker);
    // 构造产品
    director->construct();

    // 释放内存
    delete director;
    delete maker;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Maker {
public:
    virtual void make() = 0;
};

class ConcreteMaker : public Maker {
public:
    void make() {
        cout << "ConcreteMaker makes a product." << endl;
    }
};

class Director {
public:
    void setMaker(Maker* maker) {
        _maker = maker;
    }

    void construct() {
        _maker->make();
    }

private:
    Maker* _maker;
};

int main() {
    Director* director = new Director();
    Maker* maker = new ConcreteMaker();
    director->setMaker(maker);
    director->construct();
}
