#include<stdio.h>
#include<string.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[101] = "";
        scanf("%[^\n]", str);
        getchar();

        if(strstr(str, "L0V3") != 0) printf("Case #%d: Bibi <3\n", i+1);
        else printf("Case #%d: Not Bibi\n", i+1);
    }

    return 0;
}