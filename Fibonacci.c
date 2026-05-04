#include <stdio.h>

int main()
{
    int l = 8, a = 0, b = 1, c, i;

    printf("Fibonacci Series:\n");

    for(i = 0; i < l; i++)
    {
        if(i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }

        printf("%d ", c);
    }

    return 0;
}
