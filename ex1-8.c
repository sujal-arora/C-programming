/*to count number of blanks tabs and newlines*/
#include <stdio.h>

int main()
{
    int c;
    long nb = 0, nt = 0, nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            nb++;
        if (c == '\t')
            nt++;
        if (c == '\n')
            nl++;
    }

    printf("Blanks = %ld\nTabs = %ld\nNewlines = %ld\n", nb, nt, nl);


}
