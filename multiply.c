#include <stdio.h>

int main()
{
    int number;

    int i;
    printf("print the value of you want for table\n");
    scanf("%d", &number);
    printf("the multiply of %d:\n", number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", number, i, number * i);
    }

    return 0;
}
