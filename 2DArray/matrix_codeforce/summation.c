#include<stdio.h>
#include <stdlib.h>
int main()
{
   int r;
   scanf("%d",&r);
   int arr[r][r];
   
   for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
        scanf("%d",&arr[i][j]);
    }
   }
 
   int pri_sum=0;
   int sec_sum=0;
   for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
        if(i==j){
            pri_sum+=arr[i][j];
            if(i+j==r-1){
                sec_sum+=arr[i][j];
            }
        }
        else if(i+j==r-1){
            sec_sum+=arr[i][j];
        }
        
    }
        //   pri_sum += arr[i][i];             // Primary diagonal: [i][i]
        // sec_sum += arr[i][r - 1 - i];   // Secondary diagonal: [i][n - 1 - i]

   }
   int result=abs(pri_sum-sec_sum);
   printf("%d\n",result);

return 0;
}