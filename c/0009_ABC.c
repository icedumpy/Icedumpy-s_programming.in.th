#include <stdio.h>
int main(void)
{   char ABC[3];
    unsigned short int val[3], temp;
    scanf("%hu %hu %hu", &val[0], &val[1], &val[2]);
    scanf("%s", ABC);
    // Is this actually bubble sort?
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2-i; j++)
        {
            if (val[j+1]<val[j])
            {
                temp = val[j+1];
                val[j+1] = val[j];
                val[j] = temp;
            }
        }
    }
    for (int i=0; i<3; i++)
        printf("%hu ", val[ABC[i]-'A']);
}
