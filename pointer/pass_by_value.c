#include<stdio.h>

void fun(int x){ // eikhane x variable e fun function call korar shomoi jei value ta dei oi value ta just copy hoi. mane notun ekta scope(func func er scope ) e x variable e value  copy hoi.
    x=20;
    printf("fun function e x-->%d\n",x);
     printf("fun function e x er address-->%p\n",&x);
}



int main()
{
   int x=10;
   fun(x);
   printf("main function e x-->%d\n",x);
   printf("main function e x er address-->%p\n",&x);

return 0;
}