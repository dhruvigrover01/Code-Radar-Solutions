#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    int k=0;
    while(i<j){
        if (arr[i]==arr[n-1]){
            i++;
            j--;
            k=1;
        }
    }
    if(k==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}