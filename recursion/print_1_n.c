#include<stdio.h>
void print_1_n(int N,int n){
    if(N==n+1){
        return;
    }
    printf("%d\n",N);
    print_1_n(N+1,n);
}
int main()
{
 int n;
 scanf("%d",&n);
 print_1_n(1,n);  
return 0;
}