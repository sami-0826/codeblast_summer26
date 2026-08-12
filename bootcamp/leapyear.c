#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);

    ((a%400==0) || ((a%4==0) && (a%100!=0)))? printf("YES"):printf("NO");
}
