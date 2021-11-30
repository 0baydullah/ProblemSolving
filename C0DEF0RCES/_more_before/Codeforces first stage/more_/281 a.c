#include <stdio.h>

int main()
{
    char word[1000];
    scanf("%s",&word);

    if (word[0] < 'a')
    {
        puts(word);
    }
    else
    {
        word[0] = word[0] - 32;
        puts(word);

    }

}
