#include<stdio.h>
int main()
{
   int input;
   scanf("%d",&input);
   char s[101];
   for(int i=0;i<input;i++){
    scanf("%s",s);
    int count=0;
    for(int k=0;s[k]!='\0';k++){
        count++;
    }
    if(count<=10){
        for(int j=0;s[j]!='\0';j++){
            printf("%c",s[j]);
            
        }
        printf("\n");
        
    }else{
        printf("%c%d%c\n",s[0],count-2,s[count-1]);
    }
   }
return 0;
}