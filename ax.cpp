#include<stdio.h>
#include<string.h>

int main(){
    int testCase = 0, h = 0, m = 0;
    char str[3] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d:%d %s", &h, &m, str);
        getchar();

        if(strcmp(str, "pm") == 0) h = h % 12 + 12;
        else if(strcmp(str, "am") == 0 && h == 12) h = 0;
        printf("Case #%d: %02d:%02d\n", i+1, h, m);
    }
    

    return 0;
}