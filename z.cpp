#include<stdio.h>

int main(){
    int testCase = 0, n = 0, m = 0, need = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &n, &m);
        getchar();

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &need);
            m -= need;
        }
        getchar();
        if(m < 0) printf("Case #%d: No\n", i+1);
        else printf("Case #%d: Yes\n", i+1);
    }

    return 0;
}