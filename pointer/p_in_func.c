#include<stdio.h>
void  fun(int arr[],int n){ //by default pass_by_reference hoi jeno memory waste na hoi.karon copy hole same size er arekta array memory te jaiga dokhol korbe folee memory waste hobe.
    *(arr+2)=200;
    for(int i=0;i<n;i++){
        printf("%d\n",*(arr+i));
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   fun(arr,n);
   
   
return 0;
}

//#include<stdio.h>
// int* fun(){
//     // for(int i=0;i<n;i++){
//     //     printf("%d\n",*(arr+i));
//     // }
//     // *(arr+2)=200;
//     int n;
//     scanf("%d",&n);
//    int arr[n];
   
//    for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//    }
//    printf("%p\n",arr);

//     return arr; // local array return hbena.karon stack memory te func return howar sathe sathei shob delete hoye jai.
// }

// int main()
// {
    
//    int* p
//    =fun(); 
// //    for(int i=0;i<5;i++){
// //     printf("%d\n",*(p+i));
// //    }
   
//  printf("%p",p);
// return 0;
// }
