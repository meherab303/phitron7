#include<stdio.h>
int main()
{
   char  X;
   scanf("%c",&X);

   if(X<=65 &&X<=90){
    printf("%c",X+32);
   }
   else{
printf("%c",X-32);
   }
return 0;
}
// #include<stdio.h>
// int main()
// {
//    char  X;
//    scanf("%c",&X);
//    if(X>='A'&&X<='Z'){
//     printf("%c",X+32);
//    }else{
//     printf("%c",X-32);
//    }
   
   
// return 0;
// }