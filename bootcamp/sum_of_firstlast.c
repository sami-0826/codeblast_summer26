#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int first, last = n%10;

    while (n>=10){
        n = n/10;
    }
    
    first = n;

    printf("%d",first+last);
}
