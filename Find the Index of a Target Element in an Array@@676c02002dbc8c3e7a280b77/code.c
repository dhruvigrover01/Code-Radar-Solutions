#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            index==1;
        }
        else{
            index=0;
        }
    }
    if(index==0){
        printf("-1");
    }
    return 0;
}