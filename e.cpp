#include<stdio.h>
#include<string.h>

const char decode[11] = {'O','I','Z','E','A','S','G','T','B','P'}; 

int main(){
    int testCase = 0;
    char str[1001] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%[^\n]", str);
        getchar();

        for (int j = 0; j < strlen(str); j++)
        {
            if(str[j] >= '0' && str[j] <= '9'){
                str[j] = decode[str[j] - '0'];
            }
        }

        printf("Case #%d: %s\n", i+1, str);
    }

    return 0;
}