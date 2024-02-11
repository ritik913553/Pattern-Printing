//* * * * * * * * *
//  * * * * * * *
//    * * * * *
//      * * *
//        *

#include<stdio.h>
int main(){
    int a =9;
        for(int i=1;i<=5;i++){
            for(int j=2;j<=i;j++){
                printf("  ");
            }
            for(int k=1;k<=a;k++){
                printf("* ");
            }
            a-=2;
        printf("\n");
    }
    return 0;
}