/* Input two numbers, output the product */
#include <stdio.h>

int main() {
    int x, y, m;

    printf("Please input x and y:\n");
    scanf("%d %d", &x, &y);

    m = x * y;
    printf("%d * %d = %d\n", x, y, m);

    // 下面的代码用于防止程序退出，即，如果有弹窗，不会马上退出
    getchar();
    getchar();

    return 0;
}