#include <stdio.h>
void main()
{
    int a[10][10], t[10][10], i, j, m, n;
    printf("Enter the rows and columns of the Matrix :\n");
    scanf("%d%d", &m, &n);
    printf("Enter the Elements :\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }
}