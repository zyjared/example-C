# 说明

调整一些格式、配置等。

- 删除了 `.exe`

> 如果遇到一些运行错误，可以尝试在这里寻找 - [你可能会遇到的错误](#你可能会遇到的错误)

## 个人使用

- 操作系统: Windows
- gcc 编译: [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)
- 编辑器：[Visual Studio](https://code.visualstudio.com/)

> [!TIP]
>
> 个人基础配置 [zyjared/kit-C](https://github.com/zyjared/kit-c/tree/main/docs/win)
>
> 如果遇到困难，可以先使用**任意编辑器 + gcc 命令**应该是够用的。

## 你可能会遇到的错误

> 有些代码可能会有一些改动，如果恰好你和我一样也是边学边看，可能就会遇到些“莫名其妙”的事，所以会尽量对一些改动可能会造成的结果做一个问题汇总。

### .exe 窗口会闪退？

如果直接运行 `.exe`，可能在需要输入时，你刚输入，然后回车了，还没看到结果呢，结果就闪退了。这种情况是正常的，因为确实结果也运行完了，只是太快。如果需要阻止这种行为，可以添加额外的代码：

```c
int main(void){
    // do something

    getchar(); // 清除输入缓冲区中的回车
    getchar(); // 等待输入

    return 0;
}
```
