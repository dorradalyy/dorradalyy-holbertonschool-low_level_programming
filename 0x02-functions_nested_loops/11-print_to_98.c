#include <stdio.h>

void x(int n )
{
    int i;
    if (n < 98)
    {
        for (i = n ; i < 98 ; i++)
        {
            if (i == 98)
            {
                printf("%d", i);
            }
            printf("%d", i);
            else
            {
                printf("%d, ", i);
            }
            printf('\n');
        }

        
    }
    else if (n > 98)
    {
        for (i = n ; i > 98 ; i--)
        {
            if (i == 98)
            {
                printf("%d", i);
            }
            printf("%d", i);
            else
            {
                printf("%d, ", i);
            }
            printf('\n');
        }

        
    }
    else
    {
        printf("%d", n);
    }
}