#include <stdio.h>
#include <windows.h>

int y, m, d;
int sum = 0;

int main()
{
    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d,%d,%d", &y, &m, &d);

    if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
        a[1] = 29;
    else
        a[1] = 28;

    if (m <= 1)
    {
        sum = d;
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
        {
            sum = sum + a[i];
        }
    }

    sum = sum + d;
    printf("The day is %d\n", sum);
    system("pause");
}
