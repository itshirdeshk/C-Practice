#include <stdio.h>
void main()
{
    int n, c, d, swap;
    int a[5] = {5, 4, 3, 2, 1};
    for(c = 0; c < 5; c++)
    {
        for(d = 0; d < (5 - c); d++)
        {
            if(a[d] > a[d + 1])
            {
                swap = a[d];
                a[d] = a[d + 1];
                a[d + 1] = swap;
            }
        }
    }
    for(c = 0; c < 5; c++)
    {
        printf("%d\t", a[c]);
    }
}