#include<stdio.h>
int main(){
    long long num;
    scanf("%lld",&num);

    (num%3==0 && num%5==0)? printf("YES"): printf("NO");

}
