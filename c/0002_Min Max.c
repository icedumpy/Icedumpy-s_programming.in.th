#include <stdio.h>
int main(void)
{
    unsigned short int n, i;
    int value, max=-2000000000, min=2000000000;
    scanf("%hu", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &value);
        if (value>max)
            max = value;
        if (value<min)
            min = value;
    }
    printf("%d\n%d", min, max);
}
