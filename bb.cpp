#include<stdio.h>

int main(){
    int testCase = 0;
    unsigned long int base = 0, currNum = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%lu", &base);
        getchar();

        currNum = base;
        printf("Case #%d: %lu", i+1,base);

        int idx = 2;
        do{
            printf(",%lu", base * idx);
            currNum = base * idx++;
        }while(currNum % 10 != base % 10);
        
        printf("\n");
    }
    

    return 0;
}