#include<stdio.h>

int main(){
    int i=1;
    int num;
    printf("enter the value of a\n");
    scanf("%d",&num);
    do{
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
        
    }
    while(i<=10);
return 0;
}