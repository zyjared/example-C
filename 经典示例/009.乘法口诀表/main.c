#include <conio.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    /*
     * 因为报错，所以干脆直接改了
     * 窗口需要足够宽，显示才会理想
     */

    setlocale(LC_ALL, "");

    int i, j, x, y;

    wprintf(L"乘法口诀表 \n\n");

    for (i = 1; i <= 9; i++)
    {

        printf("%d x 1 = %d  ", i, i);

        for (j = 2; j < i; j++)
        {
            x = i * j;
            y = x % 10;
            printf("%d x %d = %2d  ", j, i, i * j);
        }

        printf("%d x %d = %2d\n", j, i, i * j);
    }

    return 0;
}
