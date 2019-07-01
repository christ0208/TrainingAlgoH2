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
    char str[1001] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d : ", i+1);
        for (int j = 0; j < strlen(str); j++)
        {
            if(checkAlphabet(str[j])) printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}