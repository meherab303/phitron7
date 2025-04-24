// #include<stdio.h>
// int main()
// {
//     int n;
//    scanf("%d",&n);
//     int number[n];
//     for(int i=0;i<n;i++)
//     {
//          scanf("%d",&number[i]);
//     }
//     
//     if(n==1){
//         printf("YES\n");
//     }else{
//         int count=-1;
//         for(int i=0,j=n-1;i<=j;i++,j--){ 
            
//             if (number[i]!=number[j])

//         {
//             printf("NO\n");
//             count=0;
//             break;
//         }
        
//     }
//     if(count!=0){
//         printf("YES\n");
    
//     }
// }
// return 0;
// }

#include<stdio.h>
int main()
{
    int n;
   scanf("%d",&n);
    int number[n];
    for(int i=0;i<n;i++)
    {
         scanf("%d",&number[i]);
    }
    int palindrome=1;
    for(int i=0;i<n/2;i++){
        if(number[i]!=number[n-1-i]){
            palindrome=0;
            break;
        }
    }
    if(palindrome==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
return 0;
}