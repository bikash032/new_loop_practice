#include<stdio.h>

int main(){
    int i = 2;
    printf("the even numbers are\n");
    do
    {
        printf("%d\n",i+=2);
    }
while(i<100);
return 0;
}