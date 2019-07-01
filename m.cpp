#include<stdio.h>

int main(){
    int testCase = 0, n = 0;
    
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int maxIdx = 0;
        int max = -1000001, minInterval = 2000001, maxSecond = 0;
        scanf("%d", &n);
        getchar();
        int arr[n+1] = {0};

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if(max < arr[j]) {
                max = arr[j];
                maxIdx = j;
            }
        }
        getchar();
        
        for (int j = 0; j < n; j++)
        {
            if(max - arr[j] < minInterval && maxIdx != j) {
                minInterval = max - arr[j];
                maxSecond = arr[j];
            }
        }
        
        printf("Case #%d: %d\n", i+1, max + maxSecond);
    }
    

    return 0;
}