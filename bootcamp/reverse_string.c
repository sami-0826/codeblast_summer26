#include <stdio.h>
int main(){
    char s[1001];
    scanf("%s",s);

    int i=0;

    while (s[i] != '\0'){
        i++;
    }

    for (i = i-1; i>=0; i--){
        printf("%c",s[i]);
    }
}
