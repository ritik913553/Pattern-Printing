//    1
//   2 2
//  3 3 3
// 4 4 4 4
//5 5 5 5 5

#include<stdio.h>
int main(){
    int n=3;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            for(int i=1;i<=5;i++){
                printf("* ");
            }
        }
        else{
            printf("* ");
            for(int i=2;i<=4;i++){
                printf("  ");
            } 
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}