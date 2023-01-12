#include <stdio.h>
#include <string.h>
int main()
{
    char string1[20] = {'C', 'L', 'a', 'n', 'g', 'u', 'a', 'g', 'e'};
    printf("String : %s", string1);
    printf("Length of string is: %d\n", strlen(string1)); // 1

    char string2[20];

    strcpy(string2, string1); // 2
    printf("Value of second string is: %s\n", string2);

    char s1[10] = {'N', 'a', 'm', 'a', 's', 't', 'e', '\0'};
    char s2[10] = {'W', 'o', 'r', 'l', 'd', '\0'};

    if (strcmp(s1, s2) == 0) // 3
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    strcat(s1, s2); // 4
    printf("\nValue of first string is: %s", s1);

    char newStr[20];
    printf("\nEnter String : ");
    gets(newStr);
    printf("Original String : %s\n", newStr);
    printf("Reverse String : %s\n", strrev(newStr)); // 5

    printf("\nUpper String is: %s", strupr(newStr));
    printf("\nLower String is: %s", strlwr(newStr));
    return 0;
}