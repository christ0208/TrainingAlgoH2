#include<stdio.h>

int main(){
    int testCase = 0, n = 0, totalSideOne = 0, totalAll = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int arr[100001] = {0};
        totalAll = 0;
        totalSideOne = 0;
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            totalAll += arr[j];
        }
        getchar();

        bool canSplit = false;
        for (int j = 0; j < n; j++)
        {
            totalSideOne += arr[j];
            if(totalAll - totalSideOne == totalSideOne){
                canSplit = true;
                break;
            }
            else if(totalAll - totalSideOne < totalSideOne) break;
        }
        
        printf("Case #%d: ", i+1);
        if(canSplit) printf("Yes");
        else printf("No");

        printf("\n");

    }
    

    return 0;
}