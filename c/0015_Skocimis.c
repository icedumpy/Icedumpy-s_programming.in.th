#include <stdio.h>
int main(void)
{
    unsigned short int a, b, c, distance_ab, distance_bc;
    scanf("%hu %hu %hu", &a, &b, &c);
    distance_ab = b-a;
    distance_bc = c-b;
    if (distance_bc>distance_ab)
        printf("%hu", distance_bc-1);
    else
        printf("%hu", distance_ab-1);
    return 0;
}
