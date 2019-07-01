#include<stdio.h>

int main(){
    char str[101] = "";

    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    scanf("%[^\n]", str);
    getchar();
    printf("    printf(\"%%s\\n\",\"%s\");\n", str);
    printf("    return 0;\n");
    printf("}\n");

    return 0;
}