#include <stdio.h>
int main(){
    int n,temp,digit,count=0,sum=0;
    scanf("%d", &n);
    temp=n;
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }
    temp = n;

    while (temp > 0) {
        digit = temp % 10;

    int power = 1;
        for (int i = 0; i < count; i++) {
            power = power * digit;
        }

    sum = sum + power;
    temp = temp / 10;
    }

    if (sum==n)
        printf("YES");
    else
        printf("NO");

}
