#include<stdio.h>

int main(){
    int testCase = 0, input = 0;
    
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &input);
        getchar();

        int startNumber = 2;
        int count = 1;
        printf("Case #%d: 1", i+1);
        while(input >= startNumber){
            if(input % startNumber == 0) {
                printf(" %d", startNumber);
                count++;
            }
            startNumber++;
        }

        if(count == 1) printf(" There is 1 distinct factor that %d has\n", input);
        else printf(" There are %d distinct factors that %d has\n", count, input);
    }

    return 0;
}