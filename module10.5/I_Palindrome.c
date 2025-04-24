#include<stdio.h>
int main()
{
   char s[1001];
   scanf("%s",s);
   int lenght=0;
   for(int i=0;s[i]!='\0';i++){
    lenght++;
   }
   int palidrome=1;
   for(int i=0;i<lenght/2;i++){
    if(s[i]!=s[lenght-1-i]){
        palidrome=0;
        break;
    }
   }
    if(palidrome==1){
     printf("YES\n");}
     else{
     printf("NO\n");
     }
    
return 0;
}