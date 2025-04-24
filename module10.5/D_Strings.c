#include<stdio.h>
int main()
{
    char A[21],B[11];
    scanf("%s %s",A,B);
    int lengthA=0,lengthB=0;
    // for(int i=0;A[i]!='\0';i++){
    //  lengthA++;
    // }  
    // for(int i=0;B[i]!='\0';i++){
    //  lengthB++;
    // } 

    //
    while(A[lengthA]!='\0') lengthA++;
    while(B[lengthB]!='\0') lengthB++;

    //
    printf("%d %d\n",lengthA,lengthB);

    // int bi=0;
    // for(int i=lengthA;B[bi]!='\0';i++){
    //     A[i]=B[bi];
    //     bi++;
    // }

    //
    for(int i=0;i<lengthB;i++){
        A[lengthA+i]=B[i];
    }

    //
    for(int i=0;i<lengthA+lengthB;i++){
        printf("%c",A[i]);
    }
    printf("\n");
    char temp;
    temp=A[0];
    A[0]=B[0];
    B[0]=temp;
    for(int i=0;i<lengthA;i++){
        printf("%c",A[i]);
    }
    printf(" ");
    for(int i=0;i<lengthB;i++){
        printf("%c",B[i]);
    }

    

return 0;
}