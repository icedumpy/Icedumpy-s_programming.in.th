#include <stdio.h>
int main(void)
{
    unsigned short int i=0, capital=0, small=0;
    char input[10000];
    scanf("%s", input);

    while (input[i]!='\0')
    {
        if (input[i]>='A' && input[i]<='Z')
            capital = 1;
        else if (input[i]>='a' && input[i]<='z')
            small = 1;
        i++;

        if (small && capital)
            break;
    }

    if (small && capital)
        printf("Mix");
    else if (small)
        printf("All Small Letter");
    else if (capital)
    {
        printf("All Capital Letter");
    }
}
