#include<stdio.h>

int main(){
    int i=1;
    int num=9;
    do{
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    while(i<=10);
return 0;
}