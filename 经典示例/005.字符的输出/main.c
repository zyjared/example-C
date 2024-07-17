#include <stdio.h>

int main() {
    char ch, nch;
    int count;
    int k;

    printf("Please input a string with a # in the end.\n");
    scanf("%c", &ch);

    while (ch != '#') {
        if (ch >= '0' && ch <= '9') {
            count = ch - '0' + 1;
            scanf("%c", &nch);
            for (k = 0; k < count; k++)
                printf("%c", nch);
        }
        else
            printf("%c", ch);

        printf(" ");
        scanf("%c", &ch);
    }

    printf("#\n");

    // 下面的代码用于防止程序退出，即，如果有弹窗，不会马上退出
    getchar();
    getchar();

    return 0;
}