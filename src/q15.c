#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s[3];

    for(int i = 0; i < 3; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    fp = fopen("students.txt", "w");
    if(fp == NULL) return 1;
    for(int i = 0; i < 3; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL) return 1;
    while(fscanf(fp, "%s %d %f", s[0].name, &s[0].roll, &s[0].marks) != EOF) {
        printf("%s %d %.2f\n", s[0].name, s[0].roll, s[0].marks);
    }
    fclose(fp);

    return 0;
}
