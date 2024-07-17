#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>

int confirm_password(char* password);
int check_balance();
int show_menu(char* password);

int main() {

    setlocale(LC_ALL, "");

    wprintf(L"ATM 柜员机\n");

    char* password = malloc(sizeof(char) * 5);

    if (!confirm_password(password)) {
        return 0;
    }

    do {
        wprintf(L"\n欢迎使用 ~.~\n");
    } while (show_menu(password));

    memset(password, 0, sizeof(char) * 5);
    free(password);

    wprintf(L"谢谢使用 ~.~\n");

    return 0;
}

// 输入密码
int confirm_password(char* password) {
    char count = 3;
    char input[5];
    do {
        wprintf(L"请输入密码: ");
        scanf("%s", password);
        count--;
        if (count == 0) {
            wprintf(L"密码错误次数已达上限\n");
            return 0;
        }
    } while (strcmp(password, "1234") != 0);

    strncpy(input, password, 5);

    wprintf(L"密码正确\n");

    return 1;
}

// 1. 查询余额
int check_balance() {
    wprintf(L"余额: 100\n");
}

// 主菜单
int show_menu(char* password) {

    // 可能会携带其他数据，但应该不会是密码，纯占个位置

    struct {
        wchar_t* name;
        int (*func)();
    } menu[5] = {
        [0] = { L"退出", NULL },
        [1] = { L"查询余额", &check_balance },
        [2] = { L"取款", NULL },
        [3] = { L"存款", NULL },
    };

    wprintf(L"菜单\n");
    for (int i = 0; i < (sizeof(menu) / sizeof(menu[0])) - 1; i++) {
        wprintf(L"%4d. %ls\n", i, menu[i].name);
    }

    short choice = 0;
    do {
        wprintf(L"请选择(输入序号): ");
        scanf("%d", &choice);
    } while (choice < 0 || choice > 4);

    printf("\n"); // 改善显示效果

    if (choice == 0) {
        wprintf(L"已退出\n");
        return 0;
    }

    if (menu[choice].func != NULL) {
        menu[choice].func();
    }
    else {
        wprintf(L"暂不支持该功能\n");
    }

    return 1;
}

