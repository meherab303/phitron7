#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int idx;
    printf("Enter index to delete: ");
    scanf("%d",&idx);
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];

    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
return 0;
}