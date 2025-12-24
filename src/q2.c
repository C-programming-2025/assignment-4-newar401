#include <stdio.h>

int main()
{
    char arr[] = {'H','e','l','l','o'};
    int n = sizeof(arr) / sizeof(arr[0]);
    char *start = arr;
    char *end = arr + n - 1;
    char temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
        printf("%c", arr[i]);

    return 0;
}
