#include<stdio.h>

int main(){
    int testCase = 0;
    unsigned long long int input = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int length = 0;
        scanf("%llu", &input);
        getchar();

        while(input != 0) {
            length++;
            input /= 10;
        } 

        printf("Case #%d: %d\n", i+1, length);
    }
    

    return 0;
}