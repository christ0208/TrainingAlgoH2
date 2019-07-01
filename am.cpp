#include<stdio.h>

int main(){
    int testCase = 0;
    unsigned long int money = 0, total = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%lu", &money);
        getchar();
        total+= money;
    }

    printf("%lu\n", total);

    return 0;
}