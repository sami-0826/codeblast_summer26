#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int total = a+b+c+d+e;
    float avg = total/5;
    printf("%d %.2f",total,avg);

}
