#include<stdio.h>

int main(){
    int testCase = 0, n = 0, bibiPick= 0, liliPick = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int arr[1001] = {0};
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }  
        getchar();

        scanf("%d %d", &bibiPick, &liliPick);
        getchar();
        
        printf("Case #%d : ", i+1);
        if(arr[bibiPick - 1] > arr[liliPick - 1]) printf("Bibi");
        else if(arr[bibiPick - 1] < arr[liliPick - 1]) printf("Lili");
        else printf("Draw");

        printf("\n");
    }
    

    return 0;
}