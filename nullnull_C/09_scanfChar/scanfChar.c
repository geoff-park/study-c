#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // char ch = 0;
    // scanf_s("%c", &ch, 1);
    // printf("입력한 문자는 %c 입니다.\n", ch);

    char szBuffer[4] = {0};
    scanf_s("%4c", szBuffer, _countof(szBuffer));
    printf("%c%c%c%c\n",
           szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);
    return 0;
}
