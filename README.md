# CS-EASY-01-
一。
1. 高级语言编写效率高，但执行效率较低；低级语言执行效率高，但实现效率低。高级
2. 
```c
#include <stdio.h>  ----告诉编译器把stdio.h中的内容包含在当前程序之中

int main()    ------定义一个返回值为int类型的函数（主函数），（）里面是参数，啥都没有就是void没有
{             -----{}表示一个函数的开始与结束
    printf("Hello, world!"); --------printf（）内置函数将其内内容输出，“”形式为表达字符串的标准形式。
    return 0;  ----因为前面有int所以返回一个0；
}
```
3. 把第二行那个空白行去掉是可以的。
4. int储存整数（但数据不能太大）。emm因为要返回个整数0表示程序正常结束。
5. ![)`A{$V_A5MIFZD1{%0Z@@7](https://github.com/user-attachments/assets/138c4fc4-32ec-470c-bb1e-159444609d51)


二。
```c
#include <stdio.h>

  

int main() {

    int code;

    while (1)

    {

    printf("Show me your code,please.\n");

    scanf("%d",&code);

    if (code>=100000 && code<=999999)

    {

        printf("I am super hacker!\n");

        break;

    }

    else{

        printf("Fake code!\n");

    }

    }

  

    return 0;

}
```
