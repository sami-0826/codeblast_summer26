#include<stdio.h>
int main(){
    int grade;
    scanf("%d",&grade);

    if(grade>=80 && grade<=100) printf("A");
    else if(grade>=70 && grade<=79) printf("B");
    else if(grade>=60 && grade<=69) printf("C");
    else if(grade>=50 && grade<=59) printf("D");
    else if(grade>=0 && grade<=49) printf("F");
    
}
