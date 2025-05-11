#include<stdio.h>
void print_array(int arr[],int n){
    if(n<0){
        return;
    }
    printf("%d ",arr[n]);
    print_array(arr,n-1);
}

int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   print_array(arr,n-1);
return 0;
}