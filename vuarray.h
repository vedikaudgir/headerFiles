#include <stdio.h>

void read1d(int a[50], int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("Enter element no. %d - ", i + 1);
        scanf("%d", &a[i]);
    }
}

void print1d(int a[50], int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}

void readMatrice(int a[50][50], int n, int m)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            printf("\nEnter element (%d,%d) - ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void printMatrice(int a[50][50], int n, int m)
{
    int i, j;
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int a[10][10], int r1, int c1, int b[10][10], int r2, int c2,int sum[10][10]={0})
{
    int i, j;
    if (r1 != r2 || c1 != c2)
    {
        printf("These matrices cannot be added");
    }
    else
    {
        for (i = 0; i <= r1; i++)
        {
            for (j = 0; j <= c1; j++)
            {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%3d",sum[i][j]);
            }
            printf("\n");
        }
    }
}