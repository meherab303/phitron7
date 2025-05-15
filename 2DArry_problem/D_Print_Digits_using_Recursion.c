#include<stdio.h>
void digit_of_number(int n){
    if(n<10){
        printf("%d ",n);
        return ;
    }
    
    digit_of_number(n/10);
    int reminder=n%10;
    printf("%d ",reminder);
    
}
int main()
{
   int t;
   scanf("%d",&t);
   int r_num;
   for(int i=1;i<=t;i++){
    scanf("%d",&r_num);
    digit_of_number(r_num);
    printf("\n");
   }
return 0;
}