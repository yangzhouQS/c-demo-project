#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * 判断是否是闰年
 * @param year
 * @return
 */
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}


/**
 * 为了编写一个C语言函数，用于获取输入日期下一天的日期，
 * 我们需要考虑几个关键点，包括日期的格式、如何处理月份和年份的变化（特别是闰年），
 * 以及如何增量日期。以下是一个简单的示例，假设日期以“年-月-日”的格式（如2023-03-15）输入，并且输出也是相同的格式。
 * @param year
 * @return
 */

// 检查是否是闰年
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取给定月份的天数，考虑闰年
int getDaysOfMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

// 获取输入日期下一天的日期
void getNextDay(char* inputDate, char* nextDate) {
    int year, month, day;
    sscanf(inputDate, "%d-%d-%d", &year, &month, &day); // 解析日期

    day++; // 日期加1
    int daysInCurrentMonth = getDaysOfMonth(month, year);
    if (day > daysInCurrentMonth) { // 如果超出了当前月份的天数
        day = 1; // 重置为1
        month++; // 月份加1
        if (month > 12) { // 如果超出了12月
            month = 1; // 重置为1月
            year++; // 年份加1
        }
    }

    sprintf(nextDate, "%d-%02d-%02d", year, month, day); // 格式化输出日期
}

int main() {
    char inputDate[11]; // 假设日期格式为"年-月-日"，共10个字符加一个空字符
    char nextDate[11];
    printf("请输入日期（格式：年-月-日）：");
    scanf("%10s", inputDate); // 读取输入的日期，限制为10个字符以防止缓冲区溢出

    getNextDay(inputDate, nextDate); // 获取下一天的日期
    printf("下一天的日期是：%s\n", nextDate); // 输出结果

    return 0;
}
