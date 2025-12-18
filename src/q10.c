#include <stdio.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
    int mileage;
};

int main() {
    struct Car cars[3];
    for(int i = 0; i < 3; i++) {
        scanf("%s %d %d", cars[i].model, &cars[i].year, &cars[i].mileage);
    }

    int minIndex = 0;
    for(int i = 1; i < 3; i++) {
        if(cars[i].mileage < cars[minIndex].mileage) {
            minIndex = i;
        }
    }

    printf("%s %d %d\n", cars[minIndex].model, cars[minIndex].year, cars[minIndex].mileage);
    return 0;
}
