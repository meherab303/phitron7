#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int even=0,odd=0,pos=0,neg=0;
    int x;
    for(int i=1;i<=n;i++)
    {
      scanf("%d", &x);
      if(x%2==0 ){
        even++; 
        if(x>0){
            pos++;
        }else if(x<0){
            neg++;
        }
       
      }
      else if(x%2!=0){
        odd++;
        if(x<0){
            
        neg++;
        }else if(x>0){
            pos++;
        }
       
      }
      


    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
return 0;
}