#include<stdio.h>

int getMin(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    unsigned int testCase = 0, n = 0, a[1001] = {0}, l = 0, r = 0, min = 9999;

    scanf("%u", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        min = 9999;
        scanf("%u", &n);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%u", &a[j]);
        }
        getchar();
        
        scanf("%u %u", &l, &r);
        getchar();

        for (int j = l - 1; j < r; j++)
        {
            min = getMin(min, a[j]);
        }

        printf("Case #%u: %u\n", i+1, min);
    }
    

    return 0;
}