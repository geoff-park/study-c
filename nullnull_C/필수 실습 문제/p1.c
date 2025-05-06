#include <stdio.h>

int main(void)
{
    int age = 0;
    char name[32] = {0};

    scanf_s("%d%*c", &age);
    gets_s(name, sizeof(name));

    printf("%d세 %s\n", age, name);
    return 0;
}
