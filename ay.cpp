#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();    

    for (int i = 0; i < testCase; i++)
    {
        char str[1001] = "";
        bool isFullStop = false;
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d: ", i+1);
        int length = strlen(str);
        for (int j = 0; j < length; j++)
        {
            if(j == 0) str[j] = toupper(str[j]);
            else if(str[j] == '.') {
                printf("%c", str[j]);
                isFullStop = true;
                break;
            }
            else str[j] = tolower(str[j]);
            printf("%c", str[j]);
        }
        if(!isFullStop) printf(".");
        printf("\n");
    }
    

    return 0;
}
