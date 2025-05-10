#include<stdio.h>
int main()
{
   int arr[5]={10,20,30,40,50};
   printf("%p\n",arr); //&arr[0] and a ek e kotha.karon arr nijei ekta pointer jeikhane prothom index er address store thake.

   *(arr+1)=100;
   for(int i=0;i<5;i++){
    printf("%d\n",*(arr+i));
   }
return 0;
}

//1. *arr==arr[0]
//2.arr==&arr[0]