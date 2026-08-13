#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    int count = 0;

    if(n==0){
        count = 1;
    }

    else {
        while(n>0){
        n = n/10;
        count++;}
    }

    printf("%d",count);
}
