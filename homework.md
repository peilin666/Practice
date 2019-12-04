#编程练习
##数组相关
###题目
有150个数，按由小到大顺序存放在一个数组中，输入一个数，要求用折半查找法找出该数组中第几个元素的值。如果概述不在数组中，则判断该数是偶数还是奇数。
####要求
1）除了main函数，至少还有另一个函数。
2）定义数组。
2) 使用git进行源代码进行管理，上传到自己的github仓库  



***




###分析：
分析题干得出本题的逻辑关系，简化一下模型。假设只需要输入5个数，首先将这五个数键入数组中，实现第一个功能：**由大到小顺序存放**；接下来输入一个数，实现第二个功能：**采用折半查找法找出是否该数组中某个元素的值**；如若不是，则**判断该数是奇数还是偶数**，调用多个函数实现本题的目的。



###编写顺序存放函数（冒泡法）
```C
void sort (int a[],int n) //定义sort函数
{
    for(int i=0;i<n-1;i++)         //进行n-1次循环，实现n-1次比较
    {                                
        for(int j=0;j<n-1-j;j++)   //在每个n-1次循环中进行n-j-1次比较
        {
            if(a[i]>a[i+1])  // 相邻两个数比较
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t
            }
        }
    }
}
```

###编写查找函数
```C
void search(int x, int a[], int n)
{
    int F, L, M, T;  //定义开头F，结尾L，中点M，次数T
    F = 0;
    L = n - 1;
    T = 0;
    while (F < L)  //while条件循环
    {

        if (L % 2 == 0)               //当数组长度为奇数时
        {                             
            M = 1 + (F + L) / 2;      
        }                             
        else                          //当数组长度为偶数时
        {                             
            L = n;                    
            M = 1 + n / 2;            
        }                             

        if (x < a[M])                 //  如果输入的数小于中值
            L = M - 1;                //  在左半部分
        else if (x > a[M])            //  如果输入的数大于中值
            F = M + 1;                //  在右半部分
        else if (x = a[M])            //  如果查找到该数
        {
            printf("找到该数\n%d", x); //输出该数
            T = 1;                     //进行一次计数
            break;                     //中止循环
        }
        if (T = 0)                     //如果该数未查询到
        judge (int x);
    }
}
```

###函数代码

```c
#include <stdio.h>
#include <windows.h>

void search(int x, int *p, int n);
void sort(int *p, int n);

int n;

int main()
{
    int x, *p, b[1000];
    printf("请输入数组的长度:\n");
    scanf("%d", &n);
    p = b;
    printf("请输入数组的元素:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    sort(p, n);

    printf("请输入查找元素:\n");
    scanf("%d", &x);

    search(x, b, n);

    if (x % 2 == 0)
        printf("这个数为偶数\n");
    else
        printf("这个数为奇数\n");

    printf("\n");
    system("pause");
    return 0;
}

void search(int x, int *p, int n)
{

    int F, L, M, T;
    F = 0;
    L = n - 1;
    T = 0;

    while (F <= L)
    {
        M = (F + L) / 2;
        if (x < *(p + M))
            L = M - 1;
        else if (x > *(p + M))
            F = M + 1;
        else if (x = *(p + M))
        {
            printf("找到该数!\n%d", x);
            T = 1;
            break;
        }
    }
}

void sort(int *p, int n)
{
    int t;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                t = *(p + j);
                *(p + j) = *(p + 1 + j);
                *(p + 1 + j) = t;
            }
        }
    }
}
```





