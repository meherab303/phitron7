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
  
   if(r==c){

    for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){
        if(i!=j){
            if(arr[i][j]!=0){
                 printf("not unit");
            return 0;
            }

        }
        else if(i==j){
            if(arr[i][j]!=1){
                 printf("not unit matrix");
            return 0;
            }
           
        }
    }
   }

   printf("unit matrix\n");
   }else{
   printf("not unit matrix");
   }

   
   


return 0;
}