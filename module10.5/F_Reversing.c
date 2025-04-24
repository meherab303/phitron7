#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&number[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=number[i];
        number[i]=number[j];
        number[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",number[i]);
    }
   
return 0;
}