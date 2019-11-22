#include <stdio.h>
#include <windows.h>
int main()
{
   int i,m,n;
   scanf("%d%d",&m,&n);
   
   for(i=1;;i++)
   if(i*m%m==0 && i*m%n==0)
   break;
   printf("lowest common multiple=%d\n",i*m);
   
   
   for(i=m;i>=1;i--)
   if(m%i==0 && n%i==0)
   break;
   printf("greatest common divisor=%d\n",i);
   system("pause");
  // return 0;  
}