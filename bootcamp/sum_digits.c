#include<stdio.h>
int main(){
    long long a;
    int digit, sum = 0;
    scanf("%lld",&a);

    while (a>0){
        digit = a%10;
        sum = sum + digit;
    a = a/10;}

    printf("%d",sum);
}
