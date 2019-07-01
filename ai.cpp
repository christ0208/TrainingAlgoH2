#include<stdio.h>
#include<math.h>

int main(){
    int testCase = 0;
    double a = 0, b = 0, c = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        getchar();

        printf("Case #%d: ", i+1);
        if(a + b > c && b + c > a && a + c > b) printf("Yes");
        else printf("No");
        printf("\n");
    }
    

    return 0;
}