#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_even(int arr[],int n){
    int count_odd=0,count_even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even++;
        }else{
            count_odd++;
        }
    }
    printf("%d %d",count_even,count_odd);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    odd_even(arr,n);
    return 0;
}
