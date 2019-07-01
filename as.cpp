#include<stdio.h>
#include<string.h>

const char keyboardLayout[4][11] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'}, {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'}, {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};

int main(){
    int testCase = 0;
    char direction, str[101] = "";
    bool isMoved = false;

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%c", &direction);
        getchar();

        scanf("%s", str);
        getchar();

        for (int j = 0; j < strlen(str); j++)
        {
            isMoved = false;
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 10; l++)
                {
                    if(keyboardLayout[k][l] == str[j] && direction == 'R'){
                        int idx = (l-1)%10;
                        if(idx < 0) idx = 9 - l;
                        str[j] = keyboardLayout[k][idx];
                        isMoved = true;
                        break;
                    }
                    else if(keyboardLayout[k][l] == str[j] && direction == 'L'){
                        int idx = (l+1)%10;
                        if(idx < 0) idx = 9 - l;
                        str[j] = keyboardLayout[k][idx];
                        isMoved = true;
                        break;
                    }
                }
                if(isMoved) break;
            }
        }

        printf("Case #%d: %s\n", i+1, str);
    }
    

    return 0;
}