#include <stdio.h>

int main(void)
{
    int input = 0;
    int sum = 0; // 중요

    scanf_s("%d", &input);
    sum += input;

    scanf_s("%d", &input);
    sum += input;

    scanf_s("%d", &input);
    sum += input;

    printf("Total: %d\n", sum);

    return 0;
}
