#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int max2=0;
       for(int i=0;i<n;i++){
        if(max<arr[i]){
            max2=max;
            max=arr[i];
        }
        
        
           else if(max2<arr[i] && max!=max2){
               max2=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[n-1]==arr[i]){
            printf("-1");
        }
        printf("%d",max2);
       return 0;
    }