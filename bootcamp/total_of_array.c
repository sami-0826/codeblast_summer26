#include<stdio.h>
int main(){
    int n;
    long long sum=0;

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        long long x;
        scanf("%lld",&x);
        sum = sum+x;
    }
    printf("%lld",sum);
}
