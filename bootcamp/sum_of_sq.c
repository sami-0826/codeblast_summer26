#include <stdio.h>
int main(){
    long long n,res=0,sum=0;
    scanf("%lld",&n);

    for (long long i=1; i<=n; i++){
        res = i*i;
        sum = sum + res;
    }

    printf("%lld",sum);
}
