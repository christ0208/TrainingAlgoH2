#include<stdio.h>

int main(){
    int testCase = 0;
    int arr[100001] = {0};
    unsigned long long int total = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    getchar();

    if(total % 2 == 1){
        for (int i = 0; i < testCase; i++)
        {
            if(arr[i] % 2 == 1) {
                total -= arr[i];
                break;
            }
        }
    }

    printf("%llu\n", total);
    

    return 0;
}