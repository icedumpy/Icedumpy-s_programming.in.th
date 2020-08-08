#include <stdio.h>
int main(void)
{
    // My brain can't handle recursive function :(
    unsigned int a, b, temp;
    scanf("%u %u", &a, &b);

    // I might come back for practicing the recursive function ;0
    // if I have not forgotten ;)
    // I think I surely will :(
    while (1)
    {
        if (a>b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        b = b%a;
        if (b==0)
            break;
    }
    printf("%u", a);
    return 0;
}
