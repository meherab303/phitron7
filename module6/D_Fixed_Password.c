#include<stdio.h>
#include <unistd.h> // sleep() function er jonno

void loadingAnimation() {
    printf("Checking");
   
    for (int i = 0; i < 3; i++) {
        sleep(1); // wait for 1 second
        printf(".");
       
    }
    printf("\n");
}
void successAnimation() {
    printf("Access Granted! Welcome!\n");}
int main()
{
   int password;
   int attemps=0;
   while(scanf("%d",&password)!=EOF){ //এই প্রোগ্রামটি ইনপুট নেওয়া বন্ধ করবে শুধুমাত্র তখনই, যখন আপনি EOF(end of file) সিগন্যাল পাঠাবেন (Ctrl + Z + Enter Windows-এ, অথবা Ctrl + D Unix/Linux-এ)।
    loadingAnimation();
    if(password==1999){
        printf("Correct\n");
        successAnimation();
        break;
    }else{
        printf("Wrong\n");
        attemps++;
        if(attemps==3){
            printf("Too many attempts! Try later \n");
            break;
        }
    }
   }
return 0;
}