#include <stdio.h>

int main() {
    int num1,num2;

    printf("Enter numbers: ");
    scanf("%d %d", &num1,&num2);

    switch(num1>num2) {
        case 0:
            printf("%d",num2);
            break;
        case 1:
            printf("%d",num1);
            break;
    }

    return 0;
}
