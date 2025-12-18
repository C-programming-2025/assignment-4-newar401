#include <stdio.h>

int main() {
    FILE *source, *dest;
    char ch;

    source = fopen("source.txt", "r");
    if(source == NULL) return 1;

    dest = fopen("destination.txt", "w");
    if(dest == NULL) return 1;

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    fclose(source);
    fclose(dest);
    printf("File copied successfully\n");
    return 0;
}
