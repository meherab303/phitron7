#include<stdio.h>
int main()
{
   
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int pos=1;
    for(int i=1;i<N;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            pos=i+1;

        }
    }
    printf("%d %d\n",min,pos);
return 0;
}