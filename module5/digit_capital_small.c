#include<stdio.h>
int main()
{
   char X;
   scanf("%c",&X);
   if(X>=48 &&X<=57){
    printf("IS DIGIT");
   }
   else{
    printf("ALPHA\n");
    if (X>='A'&&X<='Z')
   {
    
    printf("IS CAPITAL");

   }else{
   
    printf("IS SMALL");
   }

   }
   
   
return 0;
}