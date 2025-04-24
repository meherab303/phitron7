#include<stdio.h>
int main()
{
   char s[100001];
   scanf("%s",s);
   int i=0;
   while(s[i]!='\0'){
    if(s[i]==','){
        s[i]=' ';
    }else if(s[i]>=97 && s[i]<=122){
        s[i]-=32;
    }else{
        s[i]+=32;
    }
    i++;
   }
   int j=0;
   while(s[j]!='\0'){
    printf("%c",s[j]);
    j++;
   }
return 0;
}