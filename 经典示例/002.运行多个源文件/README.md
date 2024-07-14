# 运行报错的情况

> [!IMPORTANT]
>
> 为了方便，此处我在 `main.c` 中引入了 `print.c`，但这不是推荐的做法，请参考 [第一种：引入头文件](#第一种：直接运行)。

## 第一种：引入头文件

在 `main.c` 中，引入 `print.h`

```c
// main.c
#include "print.h"

int main(void){
    printHello();
    return 0;
}
```

可以使用以下命令生成 `main.exe`

```sh
gcc -o main main.c print.c
```

运行

```sh
./main.exe
```

## 第二种：直接运行

> [!WARNING]
>
> 不推荐的引入，可能会导致重复定义

在 `main.c` 中，引入 `print.c`

```c
// main.c
#include "print.c"

int main(void){
	printHello();
	return 0;
}
```

## 其他

### makefile

该目录已创建了 `makefile`：

```makefile
objects = main.o print.o

main: ${objects}
	gcc -o main main.o print.o

main.o: main.c print.h
	gcc -c main.c

print.o: print.c print.h
	gcc -c print.c
```

> [GNU make](https://www.gnu.org/software/make/manual/make.html)

### CMakeLists.txt

```txt
cmake_minimum_required(VERSION 3.20)

project(muiltiple_source_files)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c print.c)
```

> [CMake Usage](https://cmake.org/cmake/help/book/mastering-cmake/chapter/Getting%20Started.html)

### 完整命令

当配置好之后

```sh
mkdir build

cd build

cmake ..

cd ..

mingw32-make
# make 命令无效时，使用 mingw32-make
```
