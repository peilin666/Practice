#include <stdio.h>
#include <windows.h>
int main()
{
int prime_number_judge(int x);
int a,b;
printf("please enter a number:");
scanf("%d",&a);
b=prime_number_judge(a);
printf("%d\n",b);
return 0;
}

int prime_number_judge(int x)
{
    int i,num;
    num=0;
    for(i=x;i>=1;i--)
    {
        if(x%i==0)
        num=num+1;
    }
        if(num<=2) 
        return (num);      
        else
    {
        printf("this number is not prime_nmuber");
        return (0);       
    }
}