#include<stdio.h>
int main()
{
    // input 4digit er hobe eikhane
   int a;
   scanf("%d",&a);
   int last_digit=a%10;
   if(last_digit%2==0){
    printf("EVEN");

   }
   else{
    printf("ODD");
   }

return 0;
}