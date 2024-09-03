#include<stdio.h>

int main(){
    int a;
    printf("please enter the number to initialize the even number\n");
    scanf("%d",&a);
    for(int i=2;i<=100;i+=2)
    {
        printf("%d\n",i);
    }
return 0;
}