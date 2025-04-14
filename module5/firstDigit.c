#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int first=a/1000;
    if(first%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}