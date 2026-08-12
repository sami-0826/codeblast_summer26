#include<stdio.h>
int main(){
    long long a,b,c,large;
    scanf("%lld%lld%lld",&a,&b,&c);

    large = (a>b)? a:b;
    large = (large>c)? large : c;

    printf("%lld",large);
}
