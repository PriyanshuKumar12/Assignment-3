#include<stdio.h>
int main()
{
    int n,n1=1,n2=1000,rem,i,size=6,max,sum=0,count=0,arr[10];
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
      max=arr[0];
       for(int i=0;i<size;i++)
        {
            scanf("%d",arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
     }
        printf("%d",max);
    return 0;
}