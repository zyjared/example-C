#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");					// 设置本地语言环境

	int i = 10;

	printf("  i 		=> %3d\n", i);

	printf("i, i++, i++ => %d,%d,%d\n", i, i++, i++); 	// 感觉上应该避免这种写法
	printf("  i 		=> %3d\n", i);
	printf("\n");

	wprintf(L"先计算 再使用：\n");						 // 使用宽字符串
	printf("++i 		=> %3d\n", ++i);
	printf("--i 		=> %3d\n", --i);
	printf("  i 		=> %3d\n", i);
	printf("\n");

	wprintf(L"先使用 再计算：\n");
	printf("i++ 		=> %3d\n", i++);
	printf("i-- 		=> %3d\n", i--);
	printf("  i 		=> %3d\n", i);
	printf("-i++ 		=> %3d\n", -i++);
	printf("-i-- 		=> %3d\n", -i--);
	printf("  i 		=> %3d\n", i);

	return 0;
}