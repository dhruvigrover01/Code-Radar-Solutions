#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int count=0;
int majority_element=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-1]){
            majority_element=arr[i];
            count++;

        }
    }
    if(count>n/2){
        printf("%d", majority_element);
    }
    else{
        printf("-1");
    }
    return 0;
}