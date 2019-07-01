#include<stdio.h>
#include<string.h>

void swapCharacters(char str[], int i, int j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

void swapHalf(char str[], int length){
    char strTemp[101] = "";
    int startIdx = 0;
    int leftIdx = 0;
    int mid = length / 2;
    int rightIdx = length / 2;
    for (rightIdx; rightIdx < length; rightIdx++) strTemp[startIdx++] = str[rightIdx];
    for (leftIdx; leftIdx < mid; leftIdx++) strTemp[startIdx++] = str[leftIdx];
    strcpy(str, strTemp);
}

int main(){
    int testCase = 0;
    char str[101] = "";

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", str);
        getchar();

        int length = strlen(str);
        for (int j = 0; j < length; j+=2)
        {
            swapCharacters(str, j, j+1);
        }
        swapHalf(str, length);
        printf("Case #%d\n", i+1);
        for (int j = length - 1; j >= 0; j--)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}