#include<stdio.h>

int main(){
    char strFirst[1001] = "", strSecond[1001] = "";

    scanf("%*d %*d");
    getchar();

    scanf("%s %s", strFirst, strSecond);
    getchar();

    printf("%s%s\n", strFirst, strSecond);

    return 0;
}