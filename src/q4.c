#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *arr;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
        return 1;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);

    printf("Elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    free(arr);
    return 0;
}
