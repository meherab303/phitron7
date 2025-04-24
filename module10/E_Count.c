#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000001];
   scanf("%s",s);
   int lenght=strlen(s);
   int sum=0;
   for(int i=0;i<lenght;i++){
    sum+=s[i]-'0'; // jokhon character er modde jug biyog gun bhag kori tokhon oita ascii value er modde hoi.tai value ashe integer e .

   }
   printf("%d",sum);
return 0;
}