//A B C D E F
// A B C D E
//  A B C D
//   A B C
//    A B
//     A
#include<stdio.h>
int main(){
    for(int i=1;i<=6;i++){
        for(int j=2;j<=i;j++){
            printf(" ");
        }
        int a=65;
        for(int j=6;j>=i;j--){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}