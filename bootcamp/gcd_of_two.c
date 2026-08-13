#include <stdio.h>

int main() {
    int l,s,r,gcd;
    long long a,b;
    scanf("%lld%lld",&a,&b);

    l = a;
    s = b;

    do{
        r= l%s;
        l = s;
        s = r;
    }

    while (s!=0);
    gcd = l;
    printf("%lld",gcd);
}
