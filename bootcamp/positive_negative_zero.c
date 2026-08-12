#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);

    (a>0)? printf("POSITIVE"):
    (a<0)? printf("NEGATIVE") : printf("ZERO");
}
