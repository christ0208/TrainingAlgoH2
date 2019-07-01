#include<stdio.h>

int main(){
    int testCase = 0, times = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int turnedOn = 0;
        scanf("%d", &times);
        getchar();

        while(times != 0){
            if(times % 2 == 1) turnedOn++;
            times >>= 1;
        }
        printf("Case #%d: %d\n", i+1, turnedOn);
    }
    

    return 0;
}