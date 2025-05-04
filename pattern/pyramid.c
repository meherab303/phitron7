#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int star=(n*2)-1;
   int space=n-1;
   for(int i=0;i<=n-1;i++){  // for line
      for(int k=0;k<i;k++){  //for space
         printf(" ");
      }
      // for(int j='A';j<='A'+star;j++){ // for symbol(start,number,character,etc...)
      //    printf("%c",j);
      // }

       for(int j=1;j<=star;j++){ // for symbol(start,number,character,etc...)
         printf("*");
      }
    printf("\n");
    star-=2;
    space--;
   }
return 0;
}