#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int screen(int x);

int n, i;

int main()
{
    scanf("%d", &n);
    int *const a = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++)
    {
        *(a + i) = i + 1;
    }
}