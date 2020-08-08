#include <stdio.h>
int main(void)
{
    int A[100][100], m, n, val;
    scanf("%d %d", &m, &n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &val);
            A[i][j] += val;
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
