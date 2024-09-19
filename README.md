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
4. int储存整数（unsigned int可以0到2^32-1;普通的有正负号的int是-2^31到+2^31-1；short int无符号为0到2^16-1有正负的为-2^15到2^15-1。int代表返回值为整数类型，最后return 0代表代码正常运行，如果代码错误那么就会返回一个非零的数。然后如果是void main（）的话就无法调用其他的函数了，main函数内的结束后就直接结束，但是printf，scanf之类在main内运行的还可以run。

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
