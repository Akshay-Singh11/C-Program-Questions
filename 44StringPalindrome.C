#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter String : ");
    gets(string);

    // Start from leftmost and
    // rightmost corners of str
    int l = 0;
    int h = strlen(string) - 1;

    // Keep comparing characters
    // while they are same
    while (h > l)
    {
        if (string[l++] != string[h--])
        {
            printf("%s is not a palindrome\n", string);
            return 0;
            // will return from here
        }
    }

    printf("%s is a palindrome\n", string);

    return 0;
}