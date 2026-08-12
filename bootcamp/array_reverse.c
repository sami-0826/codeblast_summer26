#include<stdio.h>
int main(){
    int n;
    long long array[10000];
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%lld",&array[i]);
    }

    for(int i=n-1; i>=0; i--){
        printf("%lld ",array[i]);
    
    }

}
