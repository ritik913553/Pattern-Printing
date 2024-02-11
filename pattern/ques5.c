//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
#include<stdio.h>
int main(){
    int a =1;
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i;j++){
            printf("  ");
            }
        
        // for(int k=1;k<=i;k++){
        //     printf("*");
        // }
        // for(int l=2;l<=i;l++){
        //     printf("*");
        // }
        for(int k=1;k<=a;k++){
        printf("* ");
        }
        a+=2;
        printf("\n");
    }
    return 0;
}