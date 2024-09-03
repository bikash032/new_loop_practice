#include <stdio.h>

int main()
{
    printf("The even numbers less then and equals to 100 are:\n");
    for (int i = 2; i <= 100; i+= 2)
    {
        printf("%d\n", i);
    }
    return 0;
}