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

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
   printf("specifc row\n");
   // printing specific row ;
   int specific_row;
   scanf("%d",&specific_row);
   for(int j=0;j<c;j++){
        printf("%d ",arr[specific_row][j]);
    }
    printf("\n");
    printf("specific column\n");
    //printing specific column
     int specific_col;
   scanf("%d",&specific_col);
     for(int i=0;i<r;i++){
        printf("%d\n",arr[i][specific_col]);
    }
return 0;
}