#include<stdio.h>

int main(){
    int n = 0, m = 0, maxA = 0, maxB = 0;
    
    scanf("%d %d", &n, &m);
    getchar();

    int a[n + 1] = {0}, b[n + 1] = {0};
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(maxA < a[i]) maxA = a[i];
    }
    getchar();
    
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        if(maxB < b[i]) maxB = b[i];
    }
    getchar();

    if(maxA > maxB) printf("The dark secret was true");
    else printf("Secret debunked");

    printf("\n");

    return 0;
}