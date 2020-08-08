#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.6f", pow(pow(a, 2)+pow(b, 2), 0.5));
}
