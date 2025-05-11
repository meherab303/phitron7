#include<stdio.h>

void hello(int n){

    if(n==6){
        return;
    }
    hello(n+1);
    
    printf("%d\n",n);
}

int main()
{
   hello(1);
return 0;
}