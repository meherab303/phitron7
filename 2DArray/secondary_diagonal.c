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
        printf("Not secondary diagonal (not square matrix)\n");
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if ( ((arr[i][j] == 0) && ((i+j)==(r-1))) ||( (arr[i][j] != 0)&&((i+j)!=(r-1))) ) {
                printf("Not secondary diagonal\n");
                    return 0;}

                // if(((i+j)==(r-1))){
                //     printf("Not secondary diagonal\n");
                //     return 0;
                // }  
            // }else if( (arr[i][j] != 0)){
            //     if(((i+j)!=(r-1))){
            //         printf("Not secondary diagonal\n");
            //         return 0;
            //     }
            // }


        }
    }

    printf("secondary diagonal\n");
    return 0;
}
