#include<stdio.h>

const double PI = 3.14;

//  2 x π x r x ( t + r )
int main(){
    int testCase = 0;
    unsigned long int h = 0, r = 0;
    double result = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%lu %lu", &r, &h);
        getchar();

        printf("Case #%d: %lf\n", i+1, 2 * PI * r * (h + r));
    }
    

    return 0;
}