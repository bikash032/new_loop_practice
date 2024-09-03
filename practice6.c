#include<stdio.h>

int main(){
    int a;
    printf("please enter the value of a to initialize the odd number \n");
    scanf("%d",&a);
    for(int i = 1;i<=100;i+=2)
    {
        printf("%d\n",i);
    }
return 0;
}