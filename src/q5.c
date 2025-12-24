#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 100;
    char *str;
    char *p;
    int len = 0;

    str = (char *)malloc(n * sizeof(char));
    if (str == NULL)
        return 1;

    printf("Enter string: ");
    scanf("%s", str);

    p = str;
    while (*p != '\0')
    {
        len++;
        p++;
    }

    printf("Length: %d", len);

    free(str);
    return 0;
}
