#include<stdio.h>
#include<string.h>

bool checkAlphabet(char c){
    if(c == 'a' || c == 'A') return false;
    else if(c == 'e' || c == 'E') return false;
    else if(c == 'i' || c == 'I') return false;
    else if(c == 'o' || c == 'O') return false;
    else if(c == 'u' || c == 'U') return false;
    else return true;
}

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[3][1001] = {"", "", ""};
        scanf("%s", str[0]);
        getchar();

        printf("Case #%d:\n", i+1);
        for (int j = 0; j < strlen(str[0]); j++)
        {
            if(checkAlphabet(str[0][j])){
                if(str[0][j] >= 'A' && str[0][j] <= 'D') {
                    str[1][j] = str[0][j] - 'A' + '0';
                    str[0][j] = 'A';
                }
                else if(str[0][j] >= 'E' && str[0][j] <= 'H') {
                    str[1][j] = str[0][j] - 'E' + '0';
                    str[0][j] = 'E';
                }
                else if(str[0][j] >= 'I' && str[0][j] <= 'N') {
                    str[1][j] = str[0][j] - 'I' + '0';
                    str[0][j] = 'I';
                }
                else if(str[0][j] >= 'O' && str[0][j] <= 'T') {
                    str[1][j] = str[0][j] - 'O' + '0';
                    str[0][j] = 'O';
                }
                else if(str[0][j] >= 'U' && str[0][j] <= 'Z') {
                    str[1][j] = str[0][j] - 'U' + '0';
                    str[0][j] = 'U';
                }
            }else str[1][j] = '0';
        }

        printf("%s\n%s\n", str[0], str[1]);
        
    }
    

    return 0;
}