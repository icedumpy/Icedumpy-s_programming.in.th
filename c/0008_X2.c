#include <stdio.h>
int main(void)
{
    short int x, s;
    scanf("%hd %hd", &x, &s);
    printf("%hd", 2*s-x);
    return 0;
}
