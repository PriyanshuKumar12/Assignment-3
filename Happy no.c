#include<stdio.h>
int main()
{
  int n,sum=0,temp,rem,i;
  printf("enten no.: ");
  scanf("%d",&n);
  temp=n;
  sum=0;
  while(sum<=1)
  {
  while(temp!=0)
  {   
    rem=temp%10;
    sum=sum+rem*rem;
    temp=temp/10;
  }
  }
   //temp=sum;
  if(sum==1)
  printf("%d is a Happy no.",n);
  else
  printf("%d is a Sad no.",n);
  return 0;
}