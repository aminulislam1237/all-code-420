#include <stdio.h>
int main() {
    int i, number, sum = 0;
    char ch;
    for (i = 1; i <= 4; ++i) {
        printf("Enter a n%d: ", i);
        scanf("%d", &number);
        scanf("%c",&ch);
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
            continue;
        }
                if (number < 0)
     {
printf("%d is a negative number\n ", number);
}

        sum += number;
    }
    printf("Sum = %d", sum);
    return 0;
}
