#include <stdio.h>

char cookie[] = "ganaste";

int main()
{
    char buffer[32];
    printf("Cookie: %p\n", cookie);

    gets(buffer);
    printf(buffer);
    printf("\n");
}