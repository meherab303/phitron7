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
    int X;
    scanf("%d",&X);
    int found=-1;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==X)
        {
            
            found=i;
            break;
        }
        
        
    } 
    
        printf("%d\n",found);
    
   
    
    }
  

