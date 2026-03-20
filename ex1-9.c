/*to read the input and print output and if there are more then 1 space change blanks to 1*/
#include <stdio.h>

int main()
{
    int c;
    int prevblank = 0;   // flag to check previous character

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (prevblank == 0)
            {
                putchar(c);
                prevblank = 1;
            }
        }
        else
        {
            putchar(c);
            prevblank = 0;
        }
    }

    return 0;
}
