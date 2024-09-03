#include <stdio.h>

int main()
{
    printf("The odd number less then and equals to 100 are:\n");
    for (int i = 1; i <= 100; i+= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}