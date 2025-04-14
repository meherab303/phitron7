// 1

// #include<stdio.h>
// int main()
// {
//    int x=10;
//    int y=x++;
//    printf("%d %d",x,y);  //NOTE:output: x=11,y=10 karon post increment mane agekaj hobe tarpor inc hobe.int y=x++ line e kaj mane x er value y e rakha.tai ei line e  x er value 10 y e thakbe.then increment hoye x er value 11 hobe porer line e.tai print e x=11,y=10;
// return 0;
// }

// 2

// #include<stdio.h>
// int main()
// {
//    int x=10;
//    int y=++x;
//    printf("%d %d",x,y); //NOTE:output: x=11,y=11 karon pre increment mane age inc hobe tarpor kaj hobe.int y=++x line e age inc hobe x er value.inc hoye 11 hobe.tarpor kaj hobe .mane x er value y e store hbe.tai y er value 11 store hbe.tai print e x=11,y=11.
// return 0;
// }

//3

#include<stdio.h>
int main()
{
    int x=10;
     x++; //or ++x
       printf("%d",x); // eikhan x++ dile value ja hobe ++x dileo same value e print hbe karon only x++ ba ++x line e kono kaj e nai inc chara .tai porer line e print korle same value e ashbe.
return 0;
}

//4
// #include<stdio.h>
// int main()
// {
//    int x=3;
//    for (int i=0;i<=x;i++){ // loop e i++ or ++i deya same kaj e hbe .karon (int i=0;i<=x;i++) ei line e x++ ba ++x er shomoi kono kaj hoina shudu inc hoi.
//     printf("%d",i); 
//    }
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int x=10;
//    int y=x++;
//    int z=++y;
//    printf("%d",z); //output:11
// return 0;
// }