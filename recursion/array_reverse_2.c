#include<stdio.h>
void print_array(int arr[],int n,int idx){
    if(idx==n){
        return;
    }
     print_array(arr,n,idx+1);
    printf("%d ",arr[idx]);
   
}

int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   print_array(arr,n,0);
return 0;
}