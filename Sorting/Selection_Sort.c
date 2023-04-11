#include <stdio.h>
void main()
{
    int a[10], n, i, j, swap;
    printf("Enter the Number of Elements : \n");
    scanf("%d", &n);
    printf("Enter the Elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap = a[j];
                a[j] = a[i];
                a[i] = swap;
            }
        }
    }
    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}