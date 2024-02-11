//1
//1 2 3
//1 2 3 4 5
//1 2 3
//1

#include<stdio.h>
int main(){
 int nst = 1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=nst;j++){
        printf("* ");
       }
        nst++;
        printf("\n");
    }
    return 0;
}