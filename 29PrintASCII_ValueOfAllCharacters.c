#include <stdio.h>
int main()
{
    printf("All ASCII Values : \n");
    for(int i = 0; i <= 255; i++)
    {
        printf("%c \t\t %d \n", i, i);
    }
    return 0;
}
