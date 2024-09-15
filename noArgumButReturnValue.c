#include <stdio.h>
int a,b,c;
int test()
{
return a+b+c;
}
int main()
{
     a = 10;
     b = 20;
     c = 30;
    int result = test();
    printf("the sum of the three numbers are: %d", result);
}

