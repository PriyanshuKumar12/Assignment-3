#include<stdio.h>
int main()
{
    int n,n1=1,n2=500,rem,i,sum=0,count=0;
    for(i=n1;i<=n2;i++)
    {
     n=i;
     sum=0;
     while(n>0)
     {  
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
     }
     if(i==sum)
     {
        printf("%d ",i);
        count++;
     }
    }
    return 0;
}