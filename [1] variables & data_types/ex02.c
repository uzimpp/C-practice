#include <stdio.h>

int main(void)
{
	// single-character character constant
    char character;

    character = 'a';
    printf("%c\n", character);

    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(character));
}