#include <stdio.h>
int main(void)
{
    unsigned short int n[4], i=0, j=0, temp;
    scanf("%hu %hu %hu %hu", &n[0], &n[1], &n[2], &n[3]);
    for(i=0;i<3;i++)
        for(j=0;j<3-i;j++)
            if (n[j]>n[j+1])
            {
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
    printf("%hu", n[0]*n[2]);
    return 0;
}
