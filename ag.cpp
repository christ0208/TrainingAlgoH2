#include<stdio.h>

int main(){
    char name[26] = "", nim[11] = "";
    int day = 0, month = 0, year = 0;

    scanf("%[^(](%[^)])", name, nim);
    getchar();

    scanf("%d-%d-%d", &day, &month, &year);
    getchar();

    printf("%s\n", nim);
    printf("%s_%02d%02d%04d\n", name, day, month, year);

    return 0;
}