#include<stdio.h>

int main(){
    int testCase = 0, stair = 0, lastStair = 0, count = 0;
    bool printFirst = false;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &stair);
        if(count==0)count++;
        else if(stair <= lastStair) {
            if(!printFirst) {
                printf("%d", count);
                printFirst = !printFirst;
            }
            else printf(" %d", count);
            count = 1;
        }
        else count++;

        lastStair = stair;
    }
    getchar();
    
    if(!printFirst) printf("%d", count);
    else printf(" %d", count);

    printf("\n");

    return 0;
}