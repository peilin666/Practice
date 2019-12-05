#include <stdio.h>
#include <windows.h>

void search(int x, int *p, int n);
void sort(int *p, int n);

int n;

int main()
{
    int x, *p;    
    printf("请输入元素个数:\n");
    scanf("%d", &n);
    p = b;
    printf("请输入元素:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    sort(p, n);

    printf("请输入要检查的数:\n");
    scanf("%d", &x);

    search(x, b, n);

    if (x % 2 == 0)
        printf("是偶数\n");
    else
        printf("是奇数\n");

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
            printf("确认存在!\n%d", x);
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
