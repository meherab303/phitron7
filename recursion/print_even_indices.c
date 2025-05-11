#include<stdio.h>

void print_even_indc(int arr[],int n,int idx){
    if(idx==n){
        return;
    }
   
    print_even_indc(arr,n,idx+1);
     if(idx%2==0){
        printf("%d ",arr[idx]);
    }

}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   print_even_indc(arr,n,0);
return 0;
}