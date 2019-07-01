#include<stdio.h>

int main(){
    int result[6] = {0}, solved = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &result[i]);
        if(result[i] == 100) {
            solved++;
            printf("Jojo solved problem %c\n", 'A' + i);
        }
        else printf("Jojo did not solve problem %c\n", 'A' + i);
    }
    getchar();

    if(solved >= 3) printf("Jojo is prepared\n");
    else printf("Jojo is not prepared and he need to solve %d more\n", 3 - solved);

    return 0;
}