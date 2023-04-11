#include <stdio.h>
void main()
{
    int A[20], n, i, j, l;
    printf("Enter the no. of Elements :\n");
    scanf("%d", &n);
    printf("Enter the Elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for(i = 1; i < n; i++)
    {
        l = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > l)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = l;
    }
    
    // For printing the Sorted Array
    for(i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
}