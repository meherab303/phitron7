#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int count=0;
   for(int i=1;i<=n;i+=2){
      count++;
   }
   int line=5+count;
   int space=line-1;
   int star=1;
   for(int i=1;i<=line;i++){
     for(int j=1;j<=space;j++){
        printf(" ");
     }
     for(int k=1;k<=star;k++){
        printf("*");
     }
     space--;
     star+=2;
     printf("\n");

   }
   for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
         printf(" ");
      }
      for(int k=1;k<=n;k++){
         printf("*");
      }
      for(int j=1;j<=5;j++){
         printf(" ");
      }
      printf("\n");
   }
return 0;
}