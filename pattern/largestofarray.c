#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("before swapping:");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    int min=arr[0],minidx=0;
    for(int i=0;i<10;i++){
        if(arr[i]<min){
            min=arr[i];
            minidx=i;
        }
    }
    //printf("minmunm is %d\n",min);
    int max=arr[0],maxidx=0;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            maxidx=i;
        }
    }
    //printf("minmunm is %d",max);

    int temp=arr[minidx];
    arr[minidx]=arr[maxidx];
    arr[maxidx]=temp;

    printf("After swapping");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}