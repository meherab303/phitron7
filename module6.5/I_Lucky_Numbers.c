#include<stdio.h>
int main()
{
   int number;
   scanf("%d",&number);
   int a=number%10;
   int b=(number/10)%10;
   if(a%b==0 || b%a==0)
      printf("YES\n");
   else
      printf("NO\n");
return 0;
}