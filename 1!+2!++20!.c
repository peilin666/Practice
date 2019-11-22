#include <stdio.h>
#include <windows.h>
int main()
{
    int sum=0;
    int ret=1;
    for(int i=1;i<=20;i++)
      ret=i*ret;
      sum=sum+ret;
    printf("%d",sum);
    system("pause");
    return(0);  
}