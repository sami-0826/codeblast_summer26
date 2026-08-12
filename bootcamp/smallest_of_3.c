#include<stdio.h>
int main(){
    int a,b,c,small;
    scanf("%d%d%d",&a,&b,&c);

    small = (a<b)? a:b;
    small = (small<c)? small : c;

    printf("%d",small);
}
