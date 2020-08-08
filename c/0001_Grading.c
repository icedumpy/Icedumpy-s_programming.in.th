#include <stdio.h>
int main(void)
{
    unsigned short int a, b, c, sum;
    scanf("%hu", &a);
    scanf("%hu", &b);
    scanf("%hu", &c);
    sum = a+b+c;
    if (sum>=80 && sum<=100)
        printf("A");
    else if (sum>=75 && sum<80)
        printf("B+");
    else if (sum>=70 && sum<75)
        printf("B");
    else if (sum>=65 && sum<70)
        printf("C+");
    else if (sum>=60 && sum<65)
        printf("C");
    else if (sum>=55 && sum<60)
        printf("D+");
    else if (sum>=50 && sum<55)
        printf("D");
    else if (sum>=0 && sum<50)
        printf("F");

    return 0;
}
