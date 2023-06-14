#include<stdio.h>
int main()
{
  int i,arr[10],counte=0,counto=0;
  printf("Enter 10 numbers: ");
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
     if(arr[i]%2==0)
     counte++;
     else
     counto++;
  }
  printf("Even = %d",counte);
  printf("\tOdd = %d",counto);
  return 0;
}