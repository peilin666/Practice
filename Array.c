#include <stdio.h>
#include <windows.h>
int Max(int x,int y);
//int Min(int x,int y);

int main()
{
 int a,b,c,d;
 printf("please enter two numbers:");
 scanf("%d %d",&a,&b);
 c=Max(a,b);
 //d=Min(a,b);
 printf("the Max is=%d\n",c);
 //printf("the Min is=%d\n",d);
 system("pause");
 return 0;    
}

int Max(int x,int y)
{
   // int i,abc,sum,min;
   int ibc;
   int abc;
   int s,min;
   int i;
   // Max=0;
    for(i=1;;i++)
    {
        if((i*x%x==0) && (i*x%y==0))
        break;
    }
    min=s+1;
    s=i*x;
    abc=i*x;
    min=i*x;
    return(abc);
}

// int Min(int x,int y)
// {
//     int i,Min;
//     for(i=x;i>=1;i--)
//     if(x%i && y%i==0)
//     break;
//     Min=i;
//     return(Min);
// }