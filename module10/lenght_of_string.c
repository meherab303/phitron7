// #include<stdio.h>
// #include <string.h>
// int main()
// {
//    char s[101];
//    scanf("%s",&s[0]);
// //    int count=0;
// //    for(int i=0;s[i]!='\0';i++){
// //     count++;
// //    }
// //    printf("%d",count);
//    printf("%d",strlen(s));
// return 0;
// }

#include<stdio.h>
int main()
{
   char s[100001];
   fgets(s,100001,stdin);
   for(int i=0;s[i]!='\\';i++)
   {
    printf("%c",s[i]);
   }
return 0;
}