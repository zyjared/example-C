#include <stdio.h>

int main() {
    printf("The bytes of the variables are:\n");
    printf("char         %2d byte\n", sizeof(char));

    printf("int          %2d bytes\n", sizeof(int));
    printf("short        %2d bytes\n", sizeof(short));
    printf("long         %2d bytes\n", sizeof(long));
    printf("long long    %2d bytes\n", sizeof(long long));

    printf("float        %2d bytes\n", sizeof(float));
    printf("double       %2d bytes\n", sizeof(double));
    printf("long double  %2d bytes\n", sizeof(long double));

    return 0;
}