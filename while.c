#include<stdio.h>

int main(){
    int num;
    int i=1;
    printf("enter the number for multiplication:\n");
    scanf("%d",&num);
    printf("The multiplicaaytion table of:\n");
    while(i<=10)
{
    printf("%d*%d=%d\n",num,i,num*i);
    i++;
}
return 0;
}