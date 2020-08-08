#include <stdio.h>
int main(void)
{
    unsigned short int i, j, diff, hat[9], sum=0;
    for(i=0; i<9; i++)
    {
        scanf("%hu", &hat[i]);
        sum+=hat[i];
    }
    diff = sum-100;

    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if (i!=j)
                if (hat[i]+hat[j]==diff)
                {
                    hat[i]=0;
                    hat[j]=0;
                    break;
                }
        }
        if (hat[i]==0 && hat[j]==0)
            break;
    }

    for(i=0; i<9; i++)
        if (hat[i]!=0)
            printf("%hu\n", hat[i]);
    return 0;
}
