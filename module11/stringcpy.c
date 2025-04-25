#include<stdio.h>
#include<string.h>
int main()
{
   char a[101],b[101];
   scanf("%s %s",a,b);
   int lenghtb=strlen(b);
   for(int i=0;i<=lenghtb;i++){
      a[i]=b[i];
   }

   printf("%s %s",a,b);
  

   // printf("%s",strcpy(a,b));
   

return 0;
}