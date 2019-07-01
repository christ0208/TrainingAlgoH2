#include<stdio.h>

int getMin(int a, int b){
    return (a < b) ? a : b;
}

int main(){
    int testCase = 0, g = 0, m = 0, gm = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d", &g, &m, &gm);
        getchar();

        while(gm != 0){
            if(g < m){
                g++;
                gm--;
            }
            else if(g > m){
                m++;
                gm--;
            }
            else {
                if(gm == 1)break;
                else{
                    g++;
                    m++;
                    gm-=2;
                }
            }
        }

        printf("Case #%d: %d\n", i+1, 2*getMin(g, m));
    }
    

    return 0;
}