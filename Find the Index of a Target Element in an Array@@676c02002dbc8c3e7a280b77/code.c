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
int index=1;
    int output = -1 ; 
    for(int i=0;i<n;i++){
        if(arr[i]==k && index==1){
            
            output = i ;
            break ;
            
           
        }
         
    }

    printf("%d",output) ;
    
}