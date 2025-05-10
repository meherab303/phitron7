#include<stdio.h>
int main()
{
   int x=20;
   printf("%d\n",x);
   printf("%p\n",&x);
   
   // (int* ptr=&x ;
   // ptr=300;) ar *(&x)=300 ek e meaning.

    *(&x)=300;  
// eitar mane x er adress er modde jei value takee 300 kore dao

   printf("%d\n",*(&x));
return 0;
}