#include<stdio.h>

int main(){
    int testCase = 0, n = 0, level = 0, idxShouldKill = 0, minLevel = 1000001, monsterLevel = 0, differences = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        minLevel = 1000001;
        scanf("%d %d", &n, &level);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &monsterLevel);
            differences = level - monsterLevel;
            if(differences < 0) differences *= -1;
            if(differences < minLevel) {
                idxShouldKill = j+1;
                minLevel = differences;
            }
        }

        printf("Case #%d: %d\n", i+1, idxShouldKill);
    }   

    return 0;
}