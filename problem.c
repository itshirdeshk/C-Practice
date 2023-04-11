#include <stdlib.h>
#include <stdio.h>

void arithmeticSeries()
{
    int a, n, d, tn; // Variable Declaration
    int sum = 0;
    printf("Enter First Number of an A.P Series:\n");
    scanf("%d", &a); // First element initialization

    printf("Enter the Total Numbers in this A.P Series:\n");
    scanf("%d", &n); // total number of elements initialization

    printf("Enter the Common Difference:\n");
    scanf("%d", &d); // Common difference initialization

    sum = (n * (2 * a + (n - 1) * d)) / 2; // Total sum Formula
    tn = a + (n - 1) * d;                  // Last term Formula

    int i = a;
    while (i <= tn) // To iterate through each element
    {
        if (i != tn)
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
        i = i + d; // Increment after each iteration
    }
    printf("\n");
}

void geometricSeries()
{
    int a, n, r, temp, i = 0; // Variable Declaration
    float sum = 0;            // Sum declaration and initialization
    printf("\nEnter First Number of an G.P Series:  ");
    scanf("%d", &a); // First term initialization
    printf("\nEnter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n); // Total Numbers of terms initialization
    printf("\nEnter the Common Ratio:  ");
    scanf("%d", &r); // Common term initialization
    temp = a;
    // Print the series
    printf("The G.P Series is  :  ");
    while (i < n)
    {
        printf("%d  ", temp);
        sum = sum + temp; // Update the sum in each iteration
        temp = temp * r;  // Update the term in each iteration
        i++;
    }
    // Print the sum
    printf("\nThe Sum of Geometric Progression Series =  %f\n", sum);
}

void lcm()
{
    int num1, num2, max_div, flag = 1;
    // accept any two positive number from the user
    printf(" Enter any two positive numbers to get the LCM \n ");
    scanf(" %d %d", &num1, &num2);

    // max_div variable holds the max divisible number between num1 and num2.
    max_div = (num1 > num2) ? num1 : num2;

    while (flag) // (flag = 1)
    {
        if (max_div % num1 == 0 && max_div % num2 == 0)
        {
            printf(" The LCM of %d and %d is %d. ", num1, num2, max_div);
            break;
        }
        ++max_div; // pre-increment max_div
    }
}

void hcf()
{
    int a, b, i = 1, x;
    printf("Enter Two Numbers To Find H.C.F\n");
    printf("---------------------------\n");
    printf("Enter First Number  : ");
    scanf("%d", &a);
    printf("\nEnter Second Number : ");
    scanf("%d", &b);
    while (i <= a || i <= b)
    {
        if (a % i == 0 && b % i == 0)
            x = i;
        i++;
    }
    printf("---------------------------\n");
    printf("H.C.F of %d & %d : %d", a, b, x);
}
void triangle1()
{
    int rows, i = 1, j = 1, k = 1;
    printf("Enter the number of rows : \t");
    scanf("%d", &rows);

    while (i <= rows)
    {
        while (j <= i)
        {
            printf("%d ", k);
            j++;
            k++;
        }
        printf("\n");
        i++;
        j = 1;
    }
}

void triangle2()
{
    int i = 1, j = 1, k = 1, l = 1, m = 1, n = 1;
    while (i <= 5)
    {
        while (j <= (5 - i))
        {
            printf("  ");
            j++;
        }

        while (k <= i)
        {
            printf("%d ", l);
            k++;
            l++;
        }

        n = i;
        m = i;

        while (n > 1)
        {
            printf("%d ", m - 1);
            m--;
            n--;
        }

        printf("\n");
        i++;
        j = 1;
        k = 1;
        l = 1;
    }

    i = 1, j = 1, k = 1, l = 1, m = 1, n = 4;

    while (i < 5)
    {
        while (j <= i)
        {
            printf("  ");
            j++;
        }

        while (k <= (5 - i))
        {
            printf("%d ", l);
            k++;
            l++;
        }

        n = 4;
        m = 1;

        while (m < (5 - i))
        {
            printf("%d ", n - i);
            n--;
            m++;
        }

        printf("\n");
        i++;
        j = 1;
        k = 1;
        l = 1;
    }
}

void main()
{
    char choice;
    while (1)
    {

        printf("------- MENU ------\n");
        printf("A : Sum of an Arithmetic Series\n");
        printf("G : Sum of a Geometric Series \n");
        printf("L : Compute LCM of two Numbers \n");
        printf("H : Compute HCM of two Numbers \n");
        printf("T : Print a Triangle \n");
        printf("D : Print another type of Triangle \n");
        printf("E : Exit \n");

        printf("Enter your Choice : \t");
        scanf("%c", &choice);

        if (choice == 'A')
        {
            arithmeticSeries();
        }

        else if (choice == 'G')
        {
            geometricSeries();
        }

        else if (choice == 'L')
        {
            lcm();
        }

        else if (choice == 'H')
        {
            hcf();
        }

        else if (choice == 'T')
        {
            triangle1();
        }

        else if (choice == 'D')
        {
            triangle2();
        }

        else if (choice == 'E')
        {
            exit(1);
        }
    }
}