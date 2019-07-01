#include<stdio.h>

int main(){
    int testCase = 0;
    int arrBase[1001] = {0}, arrComp[1001] = {0};
    bool isSame = true;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &arrBase[i]);
    }
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &arrComp[i]);
        if(arrComp[i] != arrBase[i]) isSame = false;
    }
    getchar();

    printf("%s\n", (isSame) ? "exact copy": "not exact copy");

    return 0;
}