#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    char bin[20];

    printf("Enter a Decimal Number -- ");
    scanf("%d", &n);

    printf("Binary of Given Number %d is -- ", n);

    for (i = 0; n > 0; n = n / 2, i++)
    {
        bin[i] = (n % 2) + 48;
    }

    bin[i] = '\0';
    strrev(bin);

    printf("%s\n", bin);

    return 0;
}
