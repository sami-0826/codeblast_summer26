#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);

    int last = n%10;
    long long first = n;

    while (first>=10){
        first = first/10;
    }
    printf("%lld %d",first,last);
}
