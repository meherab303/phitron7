// #include<stdio.h>
// int main()
// {
//    int r,c;
//    scanf("%d %d",&r,&c);
//    int arr[r][c];
   
//    for(int i=0;i<r;i++){
//     for(int j=0;j<c;j++){
//         scanf("%d",&arr[i][j]);
//     }
//    }
  
//    if(r==c){

//     for(int i=0;i<r;i++){

//     for(int j=0;j<c;j++){
//         if(i!=j){
//             if(arr[i][j]!=0){
//                  printf("not primary diagonal");
//             return 0;
//             }

//         }
//         else if(i==j){
//             if(arr[i][j]==0){
//                  printf("not primary diagonal");
//             return 0;
//             }
           
//         }
//     }
//    }

//    printf("primary diagonal\n");
//    }else{
//    printf("not primary diagonal");
//    }

   
   


// return 0;
// }

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r != c) {
        printf("Not primary diagonal (not square matrix)\n");
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if ((i == j && arr[i][j] == 0) || (i != j && arr[i][j] != 0)) {
                printf("Not primary diagonal\n");
                return 0;
            }
        }
    }

    printf("Primary diagonal\n");
    return 0;
}
