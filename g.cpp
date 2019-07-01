#include<stdio.h>

int main(){
    int testCase = 0, n = 0, arr[101] = {0}, total = 0, pass = 0;
    double avg = 0;
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        avg = 0;
        total = 0;
        pass = 0;
        scanf("%d", &n);
        // getchar();

        for(int j = 0; j< n; j++)
        {
            scanf("%d", &arr[j]);
            avg += arr[j];
        }
        // getchar();
        avg /=  n;

        for (int j = 0; j < n; j++)
        {
            if(arr[j] >= avg) pass++;
        }

        printf("Case #%d: %d\n", i+1, pass);
        
    }

    return 0;
}