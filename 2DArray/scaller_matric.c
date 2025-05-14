#include<stdio.h>
int main()
{
   int r,c;
   scanf("%d %d",&r,&c);
   int arr[r][c];
   
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
   }
   
   int scaller_value=arr[0][0];
   if(r==c){

    for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
        if(i!=j){
            if(arr[i][j]!=0){
                 printf("not scaller matrix");
            return 0;
            }

        }
        else if(i==j){
            if(arr[i][j]!=scaller_value){
                 printf("not scaller matrix");
            return 0;
            }
           
        }
    }
   }

   printf("scaller matrix\n");
   }else{
   printf("not scaller matrix");
   }

   
   


return 0;
}