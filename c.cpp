#include<stdio.h>

int arrPacked[3][1001];

void resetArrPacked(){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            arrPacked[i][j] = 0;
        }
    }
}

int main(){
    int testCase = 0, packNeeded = 0, lengthPacked = 0;
    int arr[1001] = {0};

    resetArrPacked();

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        bool isFound = false;
        scanf("%d", &arr[i]);
        for (int j = 0; j < lengthPacked; j++)
        {
            if(arrPacked[1][j] == arr[i]){
                isFound = !isFound;
                arrPacked[0][j]++;
                break;
            }
        }
        if(!isFound){
            arrPacked[1][lengthPacked] = arr[i];
            arrPacked[0][lengthPacked++]++;
        }
    }
    getchar();

    // for (int i = 0; i < lengthPacked; i++)
    // {
    //     printf("%d %d |", arrPacked[0][i], arrPacked[1][i]);
    // }
    
    for (int i = 0; i < lengthPacked; i++)
    {
        if(arrPacked[0][i] > packNeeded) packNeeded = arrPacked[0][i];
    }
    
    printf("%d\n", packNeeded);

    return 0;
}