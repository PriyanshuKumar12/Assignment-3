#include<stdio.h>
int main()
{
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int i,num;
   printf("Enter no to search: ");
   scanf("%d",&num);
   for(i=0;i<10;i++)
   {
     if(num==arr[i])
     printf("%d found",num);
     break;
   }
   if(i==10)
   printf("%d not found",num);
   return 0;
}
