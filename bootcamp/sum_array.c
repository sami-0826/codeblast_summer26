#include<stdio.h>
int main(){
    long long n,sum=0, arr[1000];
    scanf("%lld",&n);
    for (int i=0; i<n; i++){
        scanf("%lld",&arr[i]);
        sum = sum+arr[i];
    }
    printf("%lld",sum);
}
