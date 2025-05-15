// #include<stdio.h>
// #include<string.h>
//  int v=0;
// void vowels(char s[],int l,int n){
//     if(n==l){
//         printf("%d",v);
//         return;
//     }
//     if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' ||
//     s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U') {
//     v++;
//     }

//     vowels(s,l,n+1);

// }
// int main()
// {
//    char s[200];
   
//    fgets(s,sizeof(s),stdin);
//    int l=strlen(s);
//    vowels(s,l,0);
  
   
   

// return 0;
// }



#include<stdio.h>
#include<string.h>

int vowels(char s[],int l,int n){
     int v=0;
    if(n==l){
        return 0;
    }
    if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' ||
    s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U') {
    v=1;
    }

    return v + vowels(s,l,n+1);

}
int main()
{
   char s[201];
   
   fgets(s,sizeof(s),stdin);
   int l=strlen(s);
   int r=vowels(s,l,0);
   printf("%d",r);
  
   
   

return 0;
}