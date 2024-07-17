#include <stdio.h>
#include <conio.h>

void main() {
    short Number = 0, price = 58, max = 100, min = 0;

    printf("\n====This is a Number Guess Game!====\n");

    while (Number != price) {
        do {
            printf("\nPlease input a number between %d and %d: ", min, max);
            scanf("%d", &Number);
            printf("Your input number is %d\n", Number); // 溢出的时候可能不是很好看
        } while (!(Number >= 1 && Number <= 100));

        // 如果 price 是可自定义的，应该可以使用 (Number - price) / (max - min) 固定一些提示

        if (Number > price) {
            printf("Bigger!\n");
        }
        else if (Number < price) {
            printf("Smaller!\n");
        }
        else {
            printf("Right!\n");
        }
    }

    getch();
}