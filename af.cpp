#include<stdio.h>

char map[21][21], result[21][21];

void bombHorizontal(int i, int j, int size){
    for (int count = 0; count < size; count++) result[i][count] = '@';
}

void bombVertical(int i, int j, int size){
    for (int count = 0; count < size; count++) result[count][j] = '@';
}

void bombReverseDiagonal(int i, int j, int size){
    for (int x = j, y = i; x < size && y >= 0; x++, y--) result[y][x] = '@';
    for (int x = j, y = i; x >= 0 && y < size; x--, y++) result[y][x] = '@';
}

void bombDiagonal(int i, int j, int size){
    for (int x = j, y = i; x >= 0 && y >= 0; x--, y--) result[y][x] = '@';
    for (int x = j, y = i; x < size && y < size; x++, y++) result[y][x] = '@';
}

void resetResult(){
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            result[i][j] = '.';
        }   
    }
    
}

int main(){
    int testCase = 0;
    resetResult();

    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        for (int j = 0; j < testCase; j++)
        {
            scanf("%c", &map[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < testCase; i++)
    {
        for (int j = 0; j < testCase; j++)
        {
            if(map[i][j] == '-') bombHorizontal(i, j, testCase);
            else if(map[i][j] == '|') bombVertical(i, j, testCase);
            else if(map[i][j] == '/') bombReverseDiagonal(i, j, testCase);
            else if(map[i][j] == '\\') bombDiagonal(i, j, testCase);
        }
    }

    for (int i = 0; i < testCase; i++)
    {
        for (int j = 0; j < testCase; j++)
        {
            printf("%c", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}