#include<stdio.h>
int main(){
    for(int i=50;i<=150;i++){
        int count=0;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
                printf("%d ",i);
            }
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n:");
//     scanf("%d",&n);
//     int count =0;  //prime number
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             count++;
//             break;
//         }
//     }


//     if(count == 0){
//         printf("Prime number");
//     }
//     else{
//         printf("composite number");
//     }
//     return 0;
// }