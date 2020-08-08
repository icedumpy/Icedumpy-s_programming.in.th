#include <stdio.h>
int main(void)
{
    unsigned short int mod[42] = {0}, count=0;
    short int n;
    for(unsigned short int i=0; i<10; i++)
    {
        scanf("%hd", &n);
        if (mod[n%42]==0)
        {
            mod[n%42]=1;
            count++;
        }
    }
    printf("%hu", count);
    return 0;
}
