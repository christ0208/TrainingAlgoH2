#include<stdio.h>

int main(){
    int testCase = 0, n = 0, temp = 0;
    scanf("%d",&testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int arr[1001] = {0};
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &temp);
                arr[k] += temp;   
            }
        }
        getchar();
        
        printf("Case #%d:", i+1);
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[j]);
        }
        printf("\n");
        
    }
    

    return 0;
}