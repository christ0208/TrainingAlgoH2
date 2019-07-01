#include<stdio.h>
#include<string.h>

int main(){
    int testCase = 0, lowerCase = 0, upperCase = 0;

    char str[1001] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        lowerCase = upperCase = 0;
        scanf("%[^\n]", str);
        getchar();

        for (int j = 0; j < strlen(str); j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z') upperCase++;
            else if(str[j] >= 'a' && str[j] <= 'z') lowerCase++;
        }

        if(upperCase == lowerCase){
            if(str[0] >= 'A' && str[0] <= 'Z') {
                for (int j = 0; j < strlen(str); j++)
                {
                    if(str[j] >= 'a' && str[j] <= 'z') str[j] = str[j] + ('A' - 'a');
                }
            }
            else if(str[0] >= 'a' && str[0] <= 'z') {
                for (int j = 0; j < strlen(str); j++)
                {
                    if(str[j] >= 'A' && str[j] <= 'Z') str[j] = str[j] - ('A' - 'a');
                }
            }
        }
        else{
            if(upperCase > lowerCase){
                for (int j = 0; j < strlen(str); j++)
                {
                    if(str[j] >= 'a' && str[j] <= 'z') str[j] = str[j] + ('A' - 'a');
                }
            }
            else{
                for (int j = 0; j < strlen(str); j++)
                {
                    if(str[j] >= 'A' && str[j] <= 'Z') str[j] = str[j] - ('A' - 'a');
                }
            }
        }

        printf("Case #%d: %s\n", i+1, str);
        
    }
    

    return 0;
}