#include <stdio.h>

int main() {
    float x, y, c;

    printf("Please input x and y:\n");
    scanf("%f %f", &x, &y);

    c = x > y ? x : y;
    printf("MAX of (%f,%f) is %f", x, y, c);


    // 下面的代码用于防止程序退出，即，如果有弹窗，不会马上退出
    getchar(); // 清除输入缓冲区中的回车
    getchar(); // 等待输入

    return 0;
}