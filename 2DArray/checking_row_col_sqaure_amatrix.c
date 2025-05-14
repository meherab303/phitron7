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
   if(r==1){
    printf("this is row matrix\n");
   }else if(r==c){
    printf("this is sqaure matrux\n");
   }else if(c==1){
    printf("this is column matrix\n");
   }else{
    printf("other type of matrix\n");
   }


return 0;
}