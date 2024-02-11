//* * * * * * *
//* * *   * * *
//* *       * *
//*           *

#include<stdio.h>
int main(){
    int n;
    printf("Enteer the no of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n*2 -1;i++){
            printf("*");
        }
        printf("\n");
        int nsp=1;
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int l=i;l<=n-1;l++){
            printf("*");
        }
        nsp+=2;
        printf("\n");
    }
    return 0;
}