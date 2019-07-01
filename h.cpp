#include<stdio.h>

int main(){
    int testCase = 0, n = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int arr[101] = {0};
        int maxInterval = 0, minInterval = 1000001, temp = 0;
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        getchar();
        
        maxInterval = arr[n - 1] - arr[0];
        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                temp = arr[k] - arr[j];
                if(minInterval > temp) minInterval = temp;
            }
        }
        
        printf("Case #%d: %d\n", i+1, maxInterval - minInterval);
    }

    return 0;
}