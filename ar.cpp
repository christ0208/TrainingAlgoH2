#include<stdio.h>
#include<string.h>

const char months[13][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(){
    int testCase = 0, next = 0;
    char month[10] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int idx = 0;
        scanf("%s", month);
        getchar();

        for (int j = 0; j < 12; j++)
        {
            if(strcmp(month, months[j]) == 0) {
                idx = j;
                break;
            }
        }
        
        scanf("%d", &next);
        getchar();

        printf("Case #%d: %s\n", i+1, months[(idx + next) % 12]);
    }
    

    return 0;
}