#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int prod=n*i;
        printf("%d x %d = %d",n,i,prod);
    }
    return 0;
}