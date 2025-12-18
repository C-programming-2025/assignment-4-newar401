#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    scanf("%[^\n]", str);

    fp = fopen("output.txt", "w");
    if(fp == NULL) return 1;

    fprintf(fp, "%s", str);
    fclose(fp);

    printf("File written successfully\n");
    return 0;
}
