#include <stdio.h>
/**
 * @brief 圆形类
 *
 * 该类用于表示圆形对象，包含半径、面积和周长等属性以及计算面积和周长的方法。
 */
class Circle {
public:
    // 圆的半径
    double radius;

    // 计算圆的面积
    double getArea() {
        // 面积 = π * 半径 * 半径
        return 3.14 * radius * radius;
    }

    // 计算圆的周长
    double getCircumference() {
        // 周长 = 2 * π * 半径
        return 2 * 3.14 * radius;
    }

    // 设置圆的半径
    double setRadius(double r) {
        // 将传入的半径值赋给半径属性
        radius = r;
    }
};

int main() {
    // 创建圆形对象
    Circle circle;
    // 设置圆的半径
    circle.setRadius(10);
    // 计算圆的面积和周长
    double area = circle.getArea();
    double circumference = circle.getCircumference();
    printf("area: %f\ncircumference: %f\n", area, circumference);
}
