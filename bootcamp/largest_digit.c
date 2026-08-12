#include<stdio.h>
int main(){
    long long a;
    int digit, large = 0;
    scanf("%lld",&a);

    while (a>0){
        digit = a%10;
    
    if(digit>large) large = digit;
    a = a/10;}
    
    printf("%d",large);
}
