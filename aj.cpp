#include<stdio.h>

int main(){
    int testCase = 0, length = 0;
    
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &length);
        getchar();

        char str[1001] = "";
        for (int j = 0; j < length; j++)
        {
            scanf("%c", &str[j]);
            if(str[j] == '8') str[j] = 'b';
        }
        getchar();

        printf("Case #%d: %s\n", i+1, str);
        
    }
    

    return 0;
}