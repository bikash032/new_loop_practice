#include<stdio.h>

int main(){
    int num=100;
    int i=1;
    printf("The multiplication table of 12 is:\n");
    while(i<=10)
{
    printf("%d*%d=%d\n",num,i,num*i);
    i++;
}
return 0;
}