#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            k=0;
            break;
        }
    }
    if (k==1){
             printf("Sorted");
                 }
    else{
        printf("Not Sorted");
    }
    
    return 0;
}