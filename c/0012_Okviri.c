#include <stdio.h>
void common_line(int, int);
void char_line(char*);

int main(void)
{
    int total_char=0;
    char word[15];
    scanf("%s", word);
    while(word[total_char]!='\0')
        total_char++;

    for(int i=0; i<5; i++)
    {
        if (i!=2)
            common_line(total_char, i);
        else
            char_line(word);
        printf("\n");
    }
    return 0;
}

void common_line(int total_char, int cur_line)
{
    switch (cur_line)
    {
        case 0:
        case 4:
            for(int i=1; i<=total_char; i++)
            {
                if (i%3==0)
                    printf("..*.");
                else
                    printf("..#.");
                if (i==total_char)
                    printf(".");
            }
            break;
        case 1:
        case 3:
            for(int i=1; i<=total_char; i++)
            {
                if (i%3==0)
                    printf(".*.*");
                else
                    printf(".#.#");
                if (i==total_char)
                    printf(".");
            }
            break;
    }
}

void char_line(char *word)
{
    int i=0;
    while (word[i]!='\0')
    {
        if ((i+1)%3==0)
        {
            printf("*.%c.", word[i]);
            if (word[++i]!='\0')
                printf("*.%c.", word[i++]);
        }
        else
            printf("#.%c.", word[i++]);
    }
    if (i%3==0)
        printf("*");
    else
        printf("#");
}
