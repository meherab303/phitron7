// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char a[101],b[101];
//    scanf("%s%s",a,b);
//    int len_a=strlen(a);
//    int len_b=strlen(b);
//    int min_len;
//    if(len_a<len_b){
//     min_len=len_a;
//    }else{
//     min_len=len_b;
//    }

//    for(int i=0;i<=min_len;i++){
//     if(a[i]==b[i]){
//         if(i==len_a && i==len_b){
//             printf("%s is equal to string %s",a,b);
//             break;
//         }
//         continue;
//     }
//     else if(a[i]>b[i]){
//         printf("bigger string is %s ",a);
//         break;
//     }else if(a[i]<b[i]){
//         printf("bigger string is %s",b);  
//         break;
//     }
//    }
// return 0;
// }


//another way

// #include<stdio.h>
// int main()
// {
//     char a[101],b[101];
//     scanf("%s%s",a,b);
//     int i=0;
//     while(1){
//         if(a[i]=='\0' && b[i]=='\0'){
//             printf("%s is equal to string %s",a,b);
//             break;
//         }
//         else if(a[i]=='\0'){
//             printf("%s is smaller",a);
//             break;
//         }
//         else if(b[i]=='\0'){
//             printf("%s is smaller",b);
//             break;
//         }
//         else if(a[i]>b[i]){
//             printf("%s is smaller",b);
//             break;
//         }
//         else if(a[i]<b[i]){
//             printf("%s is smaller",a);
//             break;
//         }
//         else if(a[i]==b[i]){
//            i++;
//         }
//     }
// return 0;
// }

//using (strcmp)-->eita ekta int value return kore.prothom string chuto hole negative value ,shoman hole 0 and 2nd string chuto hole positive value.


#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
   scanf("%s%s",a,b);
   int value=strcmp(a,b);
//    printf("%d ",value);
   if(value<0){
    printf("%s is smaller",a);
   }else if(value==0){
    printf("equal");
   }else{
    printf("%s is smaller",b);
   }
   
return 0;
}