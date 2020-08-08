#include <stdio.h>
void swap(int *a, int *b);
int main(void)
{
    char seq[50];
    int ball[3] = {1, 0, 0}, i=0;
    scanf("%s", seq);
    while (seq[i]!='\0')
    {
        /*
        Case 0: 'A'
        Case 1: 'B'
        Case 2: 'C'
        */
        switch (seq[i]-'A')
        {
            case 0:
                swap(&ball[0], &ball[1]);
                break;
            case 1:
                swap(&ball[1], &ball[2]);
                break;
            case 2:
                swap(&ball[0], &ball[2]);
                break;
        }
        i++;
    }
    for(i=0; i<3; i++)
        if (ball[i]==1)
        {
            printf("%d", i+1);
            break;
        }
    return 0;
}

// Swap function
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}
