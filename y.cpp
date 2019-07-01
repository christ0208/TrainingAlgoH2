#include<stdio.h>

int main(){
    int n = 0, threshold = 0, count = 0, startIdx = 0;
    int arr[100001] = {0}, arrShowed[100001] = {0};

    scanf("%d %d", &n, &threshold);
    getchar();

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] >= threshold) arrShowed[startIdx++] = i + 1;
    }
    getchar();

    if(startIdx == 0) printf("Poor Jojo");
    else {
        printf("%d\n", startIdx);
        for (int i = 0; i < startIdx; i++)
        {
            if(i == 0) printf("%d", arrShowed[i]);
            else printf(" %d", arrShowed[i]);
        }
    }
    printf("\n");
    
    

    return 0;
}