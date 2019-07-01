#include<stdio.h>

int main(){
    int testCase = 0, n = 0, pairNotOne = 0, pairOne = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int arr[1001] = {0};
        pairNotOne = pairOne = 0;
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        getchar();

        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                int resultXor = arr[j] ^ arr[k];
                int counter = 0;
                while(resultXor != 0){
                    (resultXor % 2 == 1) ? counter++: counter;
                    resultXor >>= 1;
                }
                if(counter >= 3) pairOne++;
                else pairNotOne++;
            }
        }
        printf("Case #%d: %d %d\n", i+1, pairOne, pairNotOne);
    }

    return 0;
}