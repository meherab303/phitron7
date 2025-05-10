#include<stdio.h>
int main()
{
   int x=20;
   printf("%d\n",x);
   printf("%p\n",&x);

   int* ptr;
   ptr=&x;
    
  *ptr=200; //x=200; 2tar manei same.(*ptr==x ek e kaj kore)

   printf("%p\n",ptr);
   printf("%p\n",&ptr);
   printf("%d\n",*ptr);
return 0;
}