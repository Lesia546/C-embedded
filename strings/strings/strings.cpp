
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char str[256];
    char symbol;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a symbol to delete: ");
    scanf("%c", &symbol);

    int i = 0;
    int j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != symbol)
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("Result: %s", str);

    return 0;
}
