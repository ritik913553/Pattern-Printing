#include<stdio.h>
int main(){
    int n;
    printf("Enter the nmber:");
    scanf("%d",&n);
    int first=0,second=1,next;
    printf("fibonacci series upto %d terms is ",n);
    printf("%d %d ",first,second);
    for(int i=3;i<=n;i++){
        next=first+second;
        printf(" %d ",next);
        first=second;
        second=next;
    }
    return 0;
}