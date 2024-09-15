#include<stdio.h>
int test(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}
int main()
{
    int a = 100;
    int b = 200;
    int c = 300;
    int result = test(100, 200, 300);
    printf("the sum of a b and c is:%d", result);
    return 0;
}