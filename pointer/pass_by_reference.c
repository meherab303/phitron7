#include<stdio.h>

void fun(int* x){ 
    *x=20;
    printf("fun function e x-->%d\n",*x);
     printf("fun function e x er address-->%p\n",x);
}



int main()
{
   int x=10;
    printf("main function e x er address-->%p\n",&x);
   fun(&x);
   printf("main function e x-->%d\n",x);
   printf("main function e x er address-->%p\n",&x);

return 0;
}