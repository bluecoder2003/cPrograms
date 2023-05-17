#include <stdio.h>

int main() {
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    switch (marks) {
        case 90 ... 100:
            printf("Grade: O\n");
            break;
        case 80 ... 89:
            printf("Grade: E\n");
            break;
        case 70 ... 79:
            printf("Grade: A\n");
            break;
        case 60 ... 69:
            printf("Grade: B\n");
            break;
        case 50 ... 59:
            printf("Grade: C\n");
            break;
        case 40 ... 49:
            printf("Grade: D\n");
            break;
        case 0 ... 39:
            printf("Grade: F (FAILED)\n");
            break;
        default:
            printf("INVALID\n");
            break;
    }

    return 0;
}
