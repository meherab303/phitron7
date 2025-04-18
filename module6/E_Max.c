#include<stdio.h>
#include<limits.h> // INT_MIN er jonno
// INT_MIN er jonno #include<limits.h> use kora hoyeche. INT_MIN holo ekta constant, ja int type er minimum value ke represent kore. Ekhane INT_MIN ke max variable er initial value hisebe use kora hoyeche, jate kono number er sathe compare korle seta update hoye jabe.
int main()
{
   int n;
   scanf("%d", &n);
   int x;
   int max=INT_MIN; //tahole negative positive 2ta number khetrei kaj korbe.kintu jodi max=0 hoye tahole negative number er khetre kaj korbe na.karon jekono negative number theke 0 e shobcheye boro.tokhon output always o e hobe.
   for(int i=1;i<=n;i++){
    scanf("%d", &x);
    if(x>max){
        max=x;
    }
   }
   printf("%d",max);
return 0;
}