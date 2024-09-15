#include<stdio.h>
int a,b,c;
void test();
void test(){
    int sum =a+b+c;
    printf("the sum of a, b, and c is : %d",sum);
}
int main (){
    a =10;
    b=20;
    c=30;
    test();
}