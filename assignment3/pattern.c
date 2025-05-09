#include<stdio.h>
int main()
{
   int N;
    scanf("%d",&N);
    int space1=N-1;
    int star1=1;
    int space2=1;
    
    for(int i=1;i<=N;i++){
       

        for(int j=1;j<=space1;j++){
            printf(" ");
        }
        
        for(int k=1;k<=star1;k++){
            
            if(i%2==0){
                printf("-");
            }else{
                printf("#");
            }
            
        }

        space1--;
        star1+=2; 
         printf("\n"); 
    }
    star1-=4;
    for(int i=1;i<=N-1;i++){
        for(int j=1;j<=space2;j++){
            printf(" ");
        }

        for(int j=1;j<=star1;j++){
             if((N+i)%2==0){
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
        star1-=2;
        space2++;
    }
return 0;
}