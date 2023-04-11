#include <stdio.h>
#include <conio.h>

void main() 
{
    int m1[10][10], m2[10][10], mul[10][10];
    int r1, c1, r2, c2, i, j, k;
    printf("Enter the Number of Rows and Columns of 1st Matrix :\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the Number of Rows and Columns of 2st Matrix :\n");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2) 
    {
        printf("Enter the Elements of 1st Matrix :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("Enter the Elements of 2nd Matrix :\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }

        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mul[i][j] += m1[i][k] * m2[k][j];
                }
                // printf("\n");
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("The matrix Multiplication is not possible.");
    }
} 