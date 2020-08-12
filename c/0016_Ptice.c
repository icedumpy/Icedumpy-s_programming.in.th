#include <stdio.h>

int main(void)
{
    unsigned short int N, max=0, i=0, score[3]={0};
    scanf("%hu", &N);
    char Adrian[]="ABC", Bruno[]="BABC", Goran[]="CCAABB", solution[N+1];
    scanf("%s", solution);
    while (solution[i]!='\0')
    {
        if (Adrian[i%3]==solution[i])
            score[0]++;
        if (Bruno[i%4]==solution[i])
            score[1]++;
        if (Goran[i%6]==solution[i])
            score[2]++;
        i++;
    }
    for (i=0; i<3; i++)
        if (max<score[i])
            max = score[i];

    printf("%hu\n", max);
    for (i=0; i<3; i++)
    {
        if (score[i]==max)
            switch (i)
            {
                case 0:
                    printf("Adrian\n");
                    break;
                case 1:
                    printf("Bruno\n");
                    break;
                case 2:
                    printf("Goran\n");
                    break;
            }
    }

    return 0;
}
