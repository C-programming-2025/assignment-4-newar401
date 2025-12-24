#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    int n;
    float limit;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter title: ");
        scanf("%s", b[i].title);

        printf("Enter author: ");
        scanf("%s", b[i].author);

        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }

    printf("Enter price limit: ");
    scanf("%f", &limit);

    for (int i = 0; i < n; i++)
        if (b[i].price > limit)
            printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b[i].title, b[i].author, b[i].price);

    return 0;
}
