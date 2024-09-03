#include<stdio.h>

int main(){
    // define the array 
 int arr[]={1,2,3,4,5};
   // define the number of array
   int n = sizeof(arr)/sizeof(arr[0] );
   for (int i =0;i<n;i++)
   {
    printf("%d\n",arr[i]);
   }
return 0;
}